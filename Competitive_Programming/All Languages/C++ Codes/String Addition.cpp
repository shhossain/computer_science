string solve(string a, string b) 
{
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    string op = "";
    int carry = 0;

    if (a.length() < b.length()) swap(a, b);
    int i = 0;

    for (i = 0; i < b.length(); i++) 
    {
        int ch = a[i] - '0' + b[i] - '0' + carry;
        carry = ch / 10;
        op += char(ch % 10 + '0');
    }

    for (int j = i; j < a.length(); j++) 
    {
        int ch = a[j] - '0' + carry;
        carry = ch / 10;
        op += char(ch % 10 + '0');
    }

    if (carry) op += char(carry + '0');
    reverse(op.begin(), op.end());
    
    return op;
}
