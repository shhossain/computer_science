//Contributed by : Debargha Mukherjee
//Github ID : Debargha-arch

class Solution {
public:
    vector<pair<int,string>> tens {
        {90, "Ninety"},
        {80, "Eighty"},
        {70, "Seventy"},
        {60, "Sixty"},
        {50, "Fifty"},
        {40, "Forty"},
        {30, "Thirty"},
        {20, "Twenty"},
        {10, "-"},
    };

    vector<pair<int,string>> underTwenty {
        {19, "Nineteen"},
        {18, "Eighteen"},
        {17, "Seventeen"},
        {16, "Sixteen"},
        {15, "Fifteen"},
        {14, "Fourteen"},
        {13, "Thirteen"},
        {12, "Twelve"},
        {11, "Eleven"},
        {10, "Ten"},
        { 9, "Nine"},
        { 8, "Eight"},
        { 7, "Seven"},
        { 6, "Six"},
        { 5, "Five"},
        { 4, "Four"},
        { 3, "Three"},
        { 2, "Two"},
        { 1, "One"},
    };
    string numberToWords(int num) {
        string num_str = "";

        if (num == 0)
            return "Zero";

        if ( num >= 1000000000 ) {
            num_str += numberToWords(num/1000000000) + " Billion";
            num = num % 1000000000;
            num_str += (num?" ":""); 
        }

        if ( num >= 1000000 ) {
            num_str += numberToWords(num/1000000) + " Million";
            num = num % 1000000;
            num_str += (num?" ":""); 
        }

        if ( num >= 1000 ) {
            num_str += numberToWords(num/1000) + " Thousand";
            num = num % 1000;
            num_str += (num?" ":""); 
        }

        if ( num >= 100 ) {
            num_str += numberToWords(num/100) + " Hundred";
            num = num % 100;
            num_str += (num?" ":""); 
        }

        if (  num / 10 > 1) {
            num_str += tens[tens.size() - num/10].second;
            num = num % 10;
            num_str += (num?" ":""); 
        }

        if ( num > 0 )
            num_str += underTwenty[underTwenty.size() - num].second;

        return num_str;
    }
}; 
