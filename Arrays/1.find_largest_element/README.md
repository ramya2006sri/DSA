there are 2 approaches in this:

1.sort it and u will get last element as largest.
sort(arr.begin(),arr.end());
return arr[arr.size()-1];

space comp:O(1)
time comp:O(nlogn)

2.take max and iterate through the loop.
space comp:O(1)
time comp:O(n)


don't think of 0(n^2) bcz it is not possible to do the sum in the two loops.