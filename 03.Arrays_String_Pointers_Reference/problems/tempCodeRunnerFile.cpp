        int count1 = 0;
        int count2 = 0;
        int arr1[sizeof_array] = {0};
        int arr2[sizeof_array] = {0};
        for (int i = 0; i < sizeof_array; i++)
        {
            if (arr[i] % 2 == 0)
            {
                // cout<<"even";
                count1 += 1;
                arr1[i] = arr[i];
            }
            else if (arr[i] % 2 != 0)
            {
                // cout<<"odd";
                count2 += 1;
                arr2[i] = arr[i];
            }
        }