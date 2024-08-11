// problem link
// https://codeforces.com/problemset/problem/540/A

using System;

public class solution{
    public static void Main(string[] args){
        int n = int.Parse(Console.ReadLine());
        
        string str1 = Console.ReadLine();
        string str2 = Console.ReadLine();
        int res = 0;
        for(int i = 0;i < n;i++){
            int x = str1[i] - '0';
            int y = str2[i] - '0';
            
            int val1 = Math.Abs(x-y);
            int val2 = (x+10) - y;
            int val3 = (y+10) - x;
            
            int val = Math.Min(val1, Math.Min(val2, val3));
            res += val;
            
        }
        
        Console.WriteLine(res)
        
    }
}