#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    int num_of_books;
    int book_prices[10000];
    int cash;
    int price_differnce = 2147483647;
    int book_1_price;
    int book_2_price;

    cin >> num_of_books;

    for (int i = 0; i < num_of_books; i++)
    {
        cin >> book_prices[i];
    }
    cin >> cash;

    for (int j = 0; j < num_of_books; j++)
    {

        for (int k = 0; k < num_of_books; k++)
        {
            if ((book_prices[j] + book_prices[k]) == cash)
            {
                int diff = book_prices[j] - book_prices[k];
                if (diff <= price_differnce)
                {
                    book_1_price = book_prices[j];
                    book_2_price = book_prices[k];
                }
            }
        }
    }

    cout << "Peter should buy books whose prices are " << book_1_price << " and " << book_2_price << "." << endl;

    return 0;
}