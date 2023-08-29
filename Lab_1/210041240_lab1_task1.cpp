#include <iostream>
using namespace std;

class Counter
{
private:
    int count;
    int incrementStep;

public:
    Counter()
    {
        count = 0;
        incrementStep = 5;
    }

    void setIncrementStep(int step_val)
    {
        if (step_val > 0)
        {
            incrementStep = step_val;
        }
        else
        {
            cout << "Invalid " << endl;
            incrementStep = 5;
        }
    }

    int getCount()
    {
        return count;
    }

    void increment()
    {
        count += incrementStep;
    }

    void resetCount()
    {
        count = 0;
    }

    bool isEven() {
        return (count % 2 == 0);
    }
};

int main()
{
    Counter counter;
    
    counter.setIncrementStep(5);

    counter.increment();
    counter.increment();

    cout << "Current Count: " << counter.getCount() << endl;

    counter.resetCount();
    cout << "Count after reset: " << counter.getCount() << endl;
    
    if (counter.isEven())
    {
        cout << "Count is even." << endl;
    }
    else
    {
        cout << "Count is not even." << endl;
    }
    return 0;
}
