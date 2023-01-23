// Q1
--------------------------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;



int main() {

  int num, den, res;

  try {

    cout << "Enter the numerator: ";

    cin >> num;

    cout << "Enter the denominator: ";

    cin >> den;

    if (den == 0) 

    {

      throw 0;

    }

    res = num / den;

    cout << res << endl;

  }

  catch (int e) 

  {

    cout << "Division by zero Exception" << endl;

  }

  return 0;

}


// Q2
--------------------------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;



int main() 

{

  int num;

  try {

    cout << "Enter the Marks: ";

    cin >> num;

    if (num <= 0) 

    {

      throw 0;

    }

    cout << num << endl;

  }

  catch (int e) 

  {

    cout << "Invalid Marks" << endl;

  }

  return 0;

}


// Q3
-------------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;



int main() 

{

  int num;

  try {

    cout << "Enter the Marks: ";

    cin >> num;

    if (num <= 45) 

    {

      throw 0;

    }

    cout << num << endl;

  }

  catch (int e) 

  {

    cout << "First ROund Not cleared" << endl;

  }

  return 0;

}
