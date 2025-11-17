#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <conio.h>
#include <sstream> // Added for robust CSV/string parsing
using namespace std;

// ----------------- Item Struct -----------------
struct Item
{
    int id;
    string name;
    int price;
    int quantity; // stock quantity
};

// ----------------- Branch Class -----------------
class Branch
{
    string filename;
    vector<Item> items;

public:
    Branch(string fname) : filename(fname) {}

    void load()
    {
        items.clear();
        ifstream fin(filename);
        if (!fin)
            return;
        int n;
        fin >> n;
        // Check if read was successful and file is not empty
        if (fin.fail())
        {
            fin.clear(); // Clear any error flags
            return;
        }
        fin.ignore();
        for (int i = 0; i < n; i++)
        {
            Item it;
            fin >> it.id;
            fin.ignore();
            getline(fin, it.name);
            fin >> it.price >> it.quantity;
            fin.ignore();
            items.push_back(it);
        }
        fin.close();
    }

    void save()
    {
        ofstream fout(filename);
        if (!fout.is_open())
        {
            cout << "Error: Could not open file " << filename << " for saving.\n";
            return;
        }
        fout << items.size() << endl;
        for (auto &it : items)
            fout << it.id << endl
                 << it.name << endl
                 << it.price << " " << it.quantity << endl;
        fout.close();
    }

    // Helper to check if an ID already exists
    bool itemExists(int id) const
    {
        return any_of(items.begin(), items.end(), [id](const Item &item)
                      { return item.id == id; });
    }

    void addItem()
    {
        Item it;
        cout << "Enter Item ID: ";
        // Input validation for ID
        while (!(cin >> it.id) || itemExists(it.id))
        {
            cout << "Invalid ID or ID already exists. Enter a unique integer ID: ";
            cin.clear();                                         // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard bad input
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter Item Name: ";
        getline(cin, it.name);

        cout << "Enter Price: ";
        // Input validation for Price
        while (!(cin >> it.price) || it.price < 0)
        {
            cout << "Invalid price. Enter a non-negative integer price: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cout << "Enter Quantity: ";
        // Input validation for Quantity
        while (!(cin >> it.quantity) || it.quantity < 0)
        {
            cout << "Invalid quantity. Enter a non-negative integer quantity: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        items.push_back(it);
        cout << "Item added!\n";
    }

    void display()
    {
        if (items.empty())
        {
            cout << "No items.\n";
            return;
        }
        cout << "ID\tName\tPrice\tQty\n---------------------------\n";
        for (auto &it : items)
            cout << it.id << "\t" << it.name << "\t" << it.price << "\t" << it.quantity << endl;
    }

    bool removeItem(int id, Item &removed)
    {
        for (size_t i = 0; i < items.size(); i++)
        {
            if (items[i].id == id)
            {
                removed = items[i];
                items.erase(items.begin() + i);
                return true;
            }
        }
        return false;
    }

    void updatePrice(int id)
    {
        for (auto &it : items)
        {
            if (it.id == id)
            {
                cout << "Current price of " << it.name << " is " << it.price << "\nEnter new price: ";
                int newPrice;
                // Input validation for new price
                while (!(cin >> newPrice) || newPrice < 0)
                {
                    cout << "Invalid price. Enter a non-negative integer price: ";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                it.price = newPrice;
                cout << "Price updated.\n";
                return;
            }
        }
        cout << "Item not found.\n";
    }

    void updateQuantity(int id, int qty)
    {
        for (auto &it : items)
        {
            if (it.id == id)
            {
                it.quantity = qty;
                return;
            }
        }
    }

    void sortByID()
    {
        sort(items.begin(), items.end(), [](Item a, Item b)
             { return a.id < b.id; });
    }
    void sortByName()
    {
        sort(items.begin(), items.end(), [](Item a, Item b)
             { return a.name < b.name; });
    }
    void sortByPrice()
    {
        sort(items.begin(), items.end(), [](Item a, Item b)
             { return a.price < b.price; });
    }

    void filterByPrice(int minPrice, int maxPrice)
    {
        cout << "\nItems with price between " << minPrice << " and " << maxPrice << ":\n";
        cout << "ID\tName\tPrice\tQty\n--------------------------\n";
        bool found = false;
        for (auto &it : items)
            if (it.price >= minPrice && it.price <= maxPrice)
            {
                cout << it.id << "\t" << it.name << "\t" << it.price << "\t" << it.quantity << endl;
                found = true;
            }
        if (!found)
        {
            cout << "No items found in this price range.\n";
        }
    }

    void exportCSV(const string &csvFile)
    {
        ofstream fout(csvFile);
        if (!fout.is_open())
        {
            cout << "Error: Could not open file " << csvFile << " for export.\n";
            return;
        }
        fout << "ID,Name,Price,Quantity\n";
        for (auto &it : items)
            fout << it.id << ",\"" << it.name << "\"," << it.price << "," << it.quantity << endl; // Added quotes for item name
        fout.close();
        cout << "Exported inventory to " << csvFile << endl;
    }

    void addExistingItem(const Item &it)
    {
        // Find if item already exists by ID
        auto existing = find_if(items.begin(), items.end(), [it](const Item &item)
                                { return item.id == it.id; });

        if (existing != items.end())
        {
            // If item exists, increase quantity
            existing->quantity += it.quantity;
            cout << "Item already exists. Quantity updated for ID " << it.id << ".\n";
        }
        else
        {
            // If item does not exist, add it
            items.push_back(it);
        }
    }

    int totalValue()
    {
        long long sum = 0; // Use long long for total value to prevent overflow
        for (auto &it : items)
            sum += (long long)it.price * it.quantity;
        return (int)sum;
    }
    int totalItems()
    {
        int count = 0;
        for (auto &it : items)
            count += it.quantity;
        return count;
    }
    vector<Item> &getItems()
    {
        return items;
    }
};

// ----------------- Admin Login -----------------
// Included <limits> and numeric_limits for safer input clearing
#include <limits>
bool adminLogin(string &branchName, string &username)
{
    string branch, user, pass, fBranch, fUser, fPass;
    bool success = false;
    cout << "\nAvailable branches: indore, delhi, mumbai\n";
    cout << "Enter branch name: ";
    cin >> branchName;
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    string password = "";
    char ch;
    // Input loop remains the same, but added a check for available branches

    while ((ch = _getch()) != 13)
    {
        if (ch == 8)
        {
            if (!password.empty())
            {
                password.pop_back();
                cout << "\b \b";
            }
        }
        else
        {
            password += ch;
            cout << '*';
        }
    }
    cout << endl;

    ifstream fin("admins.txt");
    if (!fin)
    {
        cout << "Error: Admins file ('admins.txt') not found!\n";
        return false;
    }
    // Added input clear in case of failed branch/user/password read
    while (fin >> fBranch >> fUser >> fPass)
    {
        if (branchName == fBranch && username == fUser && password == fPass)
        {
            success = true;
            break;
        }
    }
    fin.close();
    if (success)
        cout << "Login successful for branch " << branchName << endl;
    else
        cout << "Login failed! Check your branch, username, and password.\n";
    return success;
}

// ----------------- Change Password -----------------
void changePassword(const string &branchName, const string &username)
{
    string oldPass, newPass, b, u, p;
    char ch;
    cout << "Enter old password: ";
    oldPass = "";
    // Secure input for old password
    while ((ch = _getch()) != 13)
    {
        if (ch == 8)
        {
            if (!oldPass.empty())
            {
                oldPass.pop_back();
                cout << "\b \b";
            }
        }
        else
        {
            oldPass += ch;
            cout << '*';
        }
    }
    cout << endl;
    ifstream fin("admins.txt");
    if (!fin.is_open())
    {
        cout << "Error: Admins file ('admins.txt') not found!\n";
        return;
    }
    vector<string> lines;
    bool found = false;
    while (fin >> b >> u >> p)
    {
        if (b == branchName && u == username && p == oldPass)
        {
            found = true;
            cout << "Enter new password: ";
            newPass = "";
            // Secure input for new password
            while ((ch = _getch()) != 13)
            {
                if (ch == 8)
                {
                    if (!newPass.empty())
                    {
                        newPass.pop_back();
                        cout << "\b \b";
                    }
                }
                else
                {
                    newPass += ch;
                    cout << '*';
                }
            }
            cout << endl;
            lines.push_back(b + " " + u + " " + newPass);
        }
        else
            lines.push_back(b + " " + u + " " + p);
    }
    fin.close();
    if (!found)
    {
        cout << "Old password incorrect or admin not found!\n";
        return;
    }
    ofstream fout("admins.txt");
    if (!fout.is_open())
    {
        cout << "Error: Could not open admins.txt for writing.\n";
        return;
    }
    for (auto &line : lines)
        fout << line << endl;
    fout.close();
    cout << "Password changed successfully!\n";
}

// ----------------- Cross-Branch Report -----------------
void crossBranchReport(const vector<string> &branches)
{
    cout << "\n===== CROSS-BRANCH REPORT =====\n";
    long long grandItems = 0, grandValue = 0; // Changed to long long to prevent overflow
    for (auto &b : branches)
    {
        Branch br(b + ".txt");
        br.load();
        long long val = br.totalValue(), count = br.totalItems();
        grandItems += count;
        grandValue += val;
        cout << "Branch: " << b << " | Items: " << count << " | Total Value: " << val << endl;
    }
    cout << "-----------------------------\n";
    cout << "All Branches | Total Items: " << grandItems << " | Total Value: " << grandValue << endl;
}

// ----------------- Branch Transfer -----------------
void transferItem(const vector<string> &branches)
{
    string from, to;
    int id;
    cout << "From branch: ";
    cin >> from;
    cout << "To branch: ";
    cin >> to;

    // Check if branches exist in the list (optional, but good practice)
    auto branchExists = [&branches](const string &name)
    {
        return find(branches.begin(), branches.end(), name) != branches.end();
    };

    if (!branchExists(from) || !branchExists(to))
    {
        cout << "Error: One or both branch names are invalid.\n";
        // Clear remaining input if necessary
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return;
    }

    cout << "Item ID to transfer: ";
    // Input validation for ID
    while (!(cin >> id))
    {
        cout << "Invalid ID. Enter an integer ID: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    Branch bFrom(from + ".txt"), bTo(to + ".txt");
    bFrom.load();
    bTo.load();
    Item it;
    if (!bFrom.removeItem(id, it))
    {
        cout << "Item not found in " << from << "\n";
        bFrom.save(); // Save to ensure no file corruption if save was pending
        bTo.save();
        return;
    }
    // Updated: addExistingItem now handles merging quantities if the item already exists in the destination
    bTo.addExistingItem(it);

    bFrom.save();
    bTo.save();
    cout << "Item '" << it.name << "' (ID: " << it.id << ") transferred from " << from << " to " << to << endl;
}

// ----------------- Sales Module -----------------
void recordSale(Branch &branch, const string &branchName)
{
    int id, qty;
    cout << "Enter Item ID to sell: ";
    // Input validation for ID
    while (!(cin >> id))
    {
        cout << "Invalid ID. Enter an integer ID: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Enter quantity: ";
    // Input validation for Quantity
    while (!(cin >> qty) || qty <= 0)
    {
        cout << "Invalid quantity. Enter a positive integer quantity: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    for (auto &it : branch.getItems())
    {
        if (it.id == id)
        {
            if (it.quantity < qty)
            {
                cout << "Not enough stock! Available: " << it.quantity << endl;
                return;
            }
            it.quantity -= qty;
            long long total = (long long)it.price * qty; // Use long long for total
            cout << "Sale recorded! Total bill: " << total << endl;
            ofstream fout(branchName + "_sales.txt", ios::app);
            if (!fout.is_open())
            {
                cout << "Error: Could not open sales file for writing.\n";
                return;
            }
            // Record sale details in CSV format
            fout << it.id << ",\"" << it.name << "\"," << qty << "," << total << endl;
            fout.close();
            branch.save();
            return;
        }
    }
    cout << "Item not found.\n";
}

void viewSalesReport(const string &branchName)
{
    ifstream fin(branchName + "_sales.txt");
    if (!fin)
    {
        cout << "No sales recorded yet.\n";
        return;
    }
    string line;
    long long totalRevenue = 0; // Use long long for total revenue
    cout << "\nID\tName\tQty\tTotal\n-----------------------------\n";
    // Skip the header line if it exists (assuming the file has a header like the export)
    getline(fin, line);

    // Use stringstream to parse each line of the CSV
    while (getline(fin, line))
    {
        stringstream ss(line);
        string segment;
        vector<string> seglist;

        // Simple CSV parser: assumes no commas in name unless quoted
        while (getline(ss, segment, ','))
        {
            seglist.push_back(segment);
        }

        // The total is the last element (index 3, since we have ID, Name, Qty, Total)
        if (seglist.size() >= 4)
        {
            // Remove potential quotes from the name for clean output
            string name = seglist[1];
            if (name.front() == '"' && name.back() == '"')
            {
                name = name.substr(1, name.length() - 2);
            }

            try
            {
                // Convert the total string (last segment) to a long long
                long long total = stoll(seglist.back());
                totalRevenue += total;
                // Output the sales record
                cout << seglist[0] << "\t" << name << "\t" << seglist[2] << "\t" << total << endl;
            }
            catch (const std::exception &e)
            {
                // Handle case where total is not a valid number
                cout << "Error parsing line: " << line << " (" << e.what() << ")\n";
            }
        }
        else
        {
            cout << "Warning: Skipping malformed sales line: " << line << endl;
        }
    }
    fin.close();
    cout << "-----------------------------\nTotal Revenue: " << totalRevenue << endl;
}

// ----------------- Main -----------------
int main()
{
    // This is needed for cin.ignore(numeric_limits<streamsize>::max(), '\n');
    std::ios_base::sync_with_stdio(false);

    vector<string> branches = {"indore", "delhi", "mumbai"};
    string branchName, username;
    if (!adminLogin(branchName, username))
        return 0;
    Branch dukaan(branchName + ".txt");
    dukaan.load();
    int choice;
    do
    {
        cout << "\n====== SHOP MENU (" << branchName << " Branch) ======\n";
        cout << "1.Add 2.Display 3.Delete 4.Search 5.Update Price\n";
        cout << "6.Change Password 7.Cross-Branch Report 8.Transfer Item\n";
        cout << "9.Sort 10.Filter by Price 11.Export CSV 12.Record Sale 13.View Sales Report 14.Exit\n";
        cout << "Enter choice: ";

        // Input validation for menu choice
        while (!(cin >> choice))
        {
            cout << "Invalid choice. Enter an integer: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        switch (choice)
        {
        case 1:
            dukaan.addItem();
            dukaan.save();
            break;
        case 2:
            dukaan.display();
            break;
        case 3:
        {
            int id;
            cout << "Enter ID to delete: ";
            while (!(cin >> id))
            { // Input validation
                cout << "Invalid ID. Enter an integer ID: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            Item it;
            if (dukaan.removeItem(id, it))
                cout << "Item '" << it.name << "' deleted!\n";
            else
                cout << "Item with ID " << id << " not found.\n";
            dukaan.save();
            break;
        }
        case 4:
        {
            int id;
            cout << "Enter ID to search: ";
            while (!(cin >> id))
            { // Input validation
                cout << "Invalid ID. Enter an integer ID: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            bool found = false;
            for (auto &it : dukaan.getItems())
            {
                if (it.id == id)
                {
                    cout << "Item found: " << it.name << " | Price: " << it.price << " | Quantity: " << it.quantity << endl;
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Item with ID " << id << " not found.\n";
            break;
        }
        case 5:
        {
            int id;
            cout << "Enter ID to update: ";
            while (!(cin >> id))
            { // Input validation
                cout << "Invalid ID. Enter an integer ID: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            dukaan.updatePrice(id);
            dukaan.save();
            break;
        }
        case 6:
            changePassword(branchName, username);
            break;
        case 7:
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear buffer before report
            crossBranchReport(branches);
            break;
        case 8:
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear buffer before transfer
            transferItem(branches);
            break;
        case 9:
        {
            int s;
            cout << "Sort by 1.ID 2.Name 3.Price: ";
            while (!(cin >> s) || s < 1 || s > 3)
            { // Input validation
                cout << "Invalid sort choice. Enter 1, 2, or 3: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            if (s == 1)
                dukaan.sortByID();
            else if (s == 2)
                dukaan.sortByName();
            else if (s == 3)
                dukaan.sortByPrice();
            dukaan.display();
            break;
        }
        case 10:
        {
            int minP, maxP;
            cout << "Enter min price: ";
            while (!(cin >> minP) || minP < 0)
            { // Input validation
                cout << "Invalid min price. Enter a non-negative integer: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            cout << "Enter max price: ";
            while (!(cin >> maxP) || maxP < minP)
            { // Input validation
                cout << "Invalid max price. Enter a value greater than or equal to " << minP << ": ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            dukaan.filterByPrice(minP, maxP);
            break;
        }
        case 11:
            dukaan.exportCSV(branchName + "_inventory.csv");
            break;
        case 12:
            recordSale(dukaan, branchName);
            break;
        case 13:
            viewSalesReport(branchName);
            break;
        case 14:
            dukaan.save();
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice! Please select an option from 1 to 14.\n";
        }
    } while (choice != 14);
    return 0;
}