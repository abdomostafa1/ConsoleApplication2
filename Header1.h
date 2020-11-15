#pragma once
for (size_t i = 1; i < height; i++)
{
	if (i == 1 || i == 24)
	{
		for (size_t i = 0; i < width; i++)
		{
			cout << "#";
		}
	}
	else
	{
		for (size_t i = 0; i < width; i++)
		{
			if (i == 0 || i == 74)
				cout << "#";
			else
				cout << " ";
		}
	}
	cout << endl;
}
