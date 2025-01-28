public static int[] merge(int[] nums1, int[] nums2){
            int nums3[] = new int[nums1.length+nums2.length];
            int i =0;
            int j = 0;
            int k =0;
            while(i<nums1.length && j<nums2.length){
                if(nums1[i]<nums2[j]){
                    nums3[k] = nums1[i];
                    i++;
                }
                if(nums1[i]>nums2[j]){
                    nums3[k] = nums2[j];
                    j++;
                }
                k++;
            }
            while(i<nums1.length){
                nums3[k] = nums1[i];
                i++;
                k++;
            }
            while(j<nums2.length){
                nums3[k] = nums2[j];
                j++;
                k++;
            }
            return nums3;
        }