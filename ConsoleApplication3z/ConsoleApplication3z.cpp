#include <iostream>
int  main()
{
	int a;
	int b;
	int c;
	std::cin >> a >> b >> c;
	if(a==-b || b==-c || a==-c)
	{
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}
	return 0;
}