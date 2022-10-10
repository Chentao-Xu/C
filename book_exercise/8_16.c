void DataSort(int score[],long num[],int n)
{
    int i, j, k, temp1;
    long temp2;
        for (j = 0; j < n - 1;j++)
        {
            for (i = n - 1; i > j;i--)
            {
                if (score[i] > score[i - 1])
                {
                    temp1 = score[i];score[i] = score[i - 1];score[i - 1] = temp1;
                    temp2 = num[i];num[i] = num[i - 1];num[i - 1] = temp2;
                }
            }
        }
}