int main()
{
    int n;
    cin >> n;
    int *arr = new int[n + 1];
    int *bit /*binary index tree*/ = new int[n + 1];
    for (int i = 0; i <= n; i++)
    {
        bit[i] = 0;
        /*all the elements of binary index tree should be zero initially otherwise
        it will cause problems in update function while incrementing a value at an indexin the tree.*/
    }
    //we dont care about arr[0].
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        update(i, arr[i], bit, n);
    }
    cout << query(5, bit) << endl;
    cout << query(6, bit) - query(1, bit) << endl;
}
