struct Node
{
    int num, pos;
};
bool cmp(Node a, Node b)
{
    return a.num < b.num;
}
class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        vector<int> result;
        vector<Node> array;
        for (int i = 0; i < numbers.size(); i++)
        {
            Node temp;
            temp.num = numbers[i];
            temp.pos = i;
            array.push_back(temp);
        }

        sort(array.begin(), array.end(), cmp);
        for (int i = 0, j = array.size() - 1; i != j;)
        {
            int sum = array[i].num + array[j].num;
            if (sum == target)
            {
                if (array[i].pos < array[j].pos)
                {
                    result.push_back(array[i].pos + 1);
                    result.push_back(array[j].pos + 1);
                } else
                {
                    result.push_back(array[j].pos + 1);
                    result.push_back(array[i].pos + 1);
                }
                break;
            } else if (sum < target)
            {
                i++;
            } else if (sum > target)
            {
                j--;
            }
        }
        return result;
    }
};