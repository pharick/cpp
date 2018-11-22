#include <fstream>
using namespace std;

int findMax(int arr[], int n)
{
  int max = arr[0];
  for (int i = 1; i < n; i++)
  {
    if (arr[i] > max)
      max = arr[i];
  }
  return max;
}

int main()
{
  ifstream in("input.txt");
  ofstream out("output.txt");

  int arr[5] = {};

  in >> arr[0];
  in >> arr[1];
  in >> arr[2];
  in >> arr[3];
  in >> arr[4];

  int max = findMax(arr, 5);

  out << max - arr[0] << " ";
  out << max - arr[1] << " ";
  out << max - arr[2] << " ";
  out << max - arr[3] << " ";
  out << max - arr[4];

  in.close();
  out.close();
  return 0;
}