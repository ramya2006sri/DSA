BRUTE FORCCE

iterate through arr and check if arr[i]>=x then return i;
tc:O(n)
sc:O(1)

OPTIMAL

binary  search divides and check the condition arr[i]>=x.
make the arr into half.if mid>=x thenn the element is at left side.
if x>mid then the element is at right side.
    
now u want lower bound means arr[i]>=x.so the index of the element which is greater than the target is the ans.
so if(mid>=x) ans=mid and high=mid-1;

dry run the code u will uerstand it better.

tc:O(log n)
