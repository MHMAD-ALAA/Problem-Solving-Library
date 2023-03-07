/// @brief sorting is a most

int low = 0, high = 1e9, mid; 

while (low <= high)
{
    mid = low + (high - low) / 2; 
    if (dowork(mid) == target) return mid; 

    if (dowork(mid) < target) low = mid + 1; 
    else high = mid - 1 ;
}


