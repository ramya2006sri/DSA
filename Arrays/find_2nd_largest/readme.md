BRUTE FORCE:

sort the arr and u know that last element is largest and if there are no duplicates then only the 2nd element from end is second largest.if duplicates then u need find through loop skipping the  duplicate elements.
iterate from 2nd element from end and if the element==largest then dont do anything.
if the element is different from largest then it is the second largest.just return it.

tc:O(nlogn)+O(n) since sorting+iterating
sc:O(1)


BETTER APPROACH:

this is 2pass solution.
first u will find largest by doing in previous sum.
then u will search for second largest on comparing.the no. should not be largest and should be greter than second largest .then it is the second largest no.