#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    // Generate random number between 0 and 11
    srand(time(0));
    int daysUntilExpiration = rand() % 12;

    // Check the condition of the service and inform the user
    if (daysUntilExpiration == 0)
    {
        cout << "Your subscription has expired." << endl;
    }
    else if (daysUntilExpiration == 1)
    {
        cout << "Your subscription expires within a day!" << endl
             << "Renew now and save 20%!";
    }
    else if (daysUntilExpiration <= 5)
    {
        cout << "Your subscription expires in " << daysUntilExpiration << " days" << endl
             << "Renew now and save 10%!";
    }
    else if (daysUntilExpiration <= 10)
    {
        cout << "Your subscription will expire soon. Renew now!" << endl;
    }
    else
    {
        cout << "You have an active subscription.";
    }
}
