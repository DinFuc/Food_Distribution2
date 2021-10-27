int distributeFood2(std::vector<int> food)
{
    int res = 0;
    for(int i = 1; i < food.size(); i++)
        if(food[i - 1] & 1){
            res += 2;
            food[i]++;
        }
    return food.back() & 1? -1 : res;
}
