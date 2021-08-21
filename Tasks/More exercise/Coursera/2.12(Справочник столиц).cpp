#include <iostream>
#include <string>
#include <map>

using namespace std;

void PrintMap(const map<string, string> &m)
{
  for (const auto &item : m)
  {
    cout << item.first << "/" << item.second << " ";
  }
  cout << endl;
}

int main()
{
  int q;
  cin >> q;
  map<string, string> countries;

  for (int i = 0; i < q; ++i)
  {
    string operation_code;
    cin >> operation_code;
    if (operation_code == "CHANGE_CAPITAL")
    {
      string country, new_capital;
      cin >> country >> new_capital;
      if (countries[country] == "")
      {
        cout << "Introduce new country " << country << " with capital " << new_capital << endl;
        countries.erase(country);
      }
      else if (countries[country] == new_capital)
      {
        cout << "Country " << country << " hasn't changed its capital" << endl;
      }
      else if (countries[country] != new_capital)
      {
        cout << "Country " << country << " has changed its capital from " << countries[country] << " to " << new_capital << endl;
      }
      countries[country] = new_capital;
    }
    else if (operation_code == "RENAME")
    {
      string old_country_name, new_country_name;
      cin >> old_country_name >> new_country_name;
      if (new_country_name == old_country_name)
      {
        cout << "Incorrect rename, skip" << endl;
      }
      else if (countries.count(new_country_name))
      {
        cout << "Incorrect rename, skip" << endl;
      }
      else if (countries[old_country_name] == "")
      {
        cout << "Incorrect rename, skip" << endl;
        countries.erase(old_country_name);
      }
      else
      {
        cout << "Country " << old_country_name << " with capital " << countries[old_country_name] << " has been renamed to " << new_country_name << endl;
        countries[new_country_name] = countries[old_country_name];
        countries.erase(old_country_name);
      }
    }
    else if (operation_code == "ABOUT")
    {
      string country;
      cin >> country;
      if (countries[country] == "")
      {
        cout << "Country " << country << " doesn't exist" << endl;
        countries.erase(country);
      }
      else
      {
        cout << "Country " << country << " has capital " << countries[country] << endl;
      }
    }
    else if (operation_code == "DUMP")
    {
      if (countries.size() == 0)
      {
        cout << "There are no countries in the world" << endl;
      }
      else
      {
        PrintMap(countries);
      }
    }
  }

  return 0;
}

/*
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
  int q;
  cin >> q;

  map<string, string> country_to_capital;

  for (int i = 0; i < q; ++i) {
    string operation_code;
    cin >> operation_code;

    if (operation_code == "CHANGE_CAPITAL") {

      string country, new_capital;
      cin >> country >> new_capital;
      if (country_to_capital.count(country) == 0) {
        cout << "Introduce new country " << country << " with capital " << new_capital << endl;
      } else {
        const string& old_capital = country_to_capital[country];
        if (old_capital == new_capital) {
          cout << "Country " << country << " hasn't changed its capital" << endl;
        } else {
          cout << "Country " << country << " has changed its capital from " << old_capital << " to " << new_capital << endl;
        }
      }
      country_to_capital[country] = new_capital;

    } else if (operation_code == "RENAME") {

      string old_country_name, new_country_name;
      cin >> old_country_name >> new_country_name;
      if (old_country_name == new_country_name || country_to_capital.count(old_country_name) == 0 || country_to_capital.count(new_country_name) == 1) {
        cout << "Incorrect rename, skip" << endl;
      } else {
        cout << "Country " << old_country_name << " with capital " << country_to_capital[old_country_name] <<
            " has been renamed to " << new_country_name << endl;
        country_to_capital[new_country_name] = country_to_capital[old_country_name];
        country_to_capital.erase(old_country_name);
      }

    } else if (operation_code == "ABOUT") {

      string country;
      cin >> country;
      if (country_to_capital.count(country) == 0) {
        cout << "Country " << country << " doesn't exist" << endl;
      } else {
        cout << "Country " << country << " has capital " << country_to_capital[country] << endl;
      }

    } else if (operation_code == "DUMP") {

      if (country_to_capital.empty()) {
        cout << "There are no countries in the world" << endl;
      } else {
        for (const auto& country_item : country_to_capital) {
          cout << country_item.first << "/" << country_item.second << " ";
        }
        cout << endl;
      }

    }

  }

  return 0;
}
*/