class Solution
{
public:
    double myPow(double x, int n)
    {
        int a;
        long binform{n};
        if (binform < 0)
        {
            binform = -binform;
            x = 1 / x;
        }
        std::cout << n;
        double answer{1}, multiplier{x};

        while (binform > 0)
        {
            a = binform % 2;
            // multiplier = multiplier * answer;
            if (a == 1)
            {
                answer = answer * multiplier;
            }
            multiplier = multiplier * multiplier;
            binform = binform / 2;
        }
        return answer;
    }
};