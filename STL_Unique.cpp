//unique的功能是去除相邻的重复元素（只保留一个），还有一个容易忽视的特性是它并不真正把重复的元素删除，不知道这个特性用起来就会出问题。
//比如下面这个例子，企图输出无重复的元素： 

#include <iostream> 
#include <vector> 
#include <algorithm> 
#include <iterator> 
using namespace std; 
int main(){ 
　　vector<int> ivec; 
　　copy(istream_iterator<int>(cin),istream_iterator<int>(),back_inserter(ivec)); 
　　sort(ivec.begin(),ivec.end()); 
　　unique(ivec.begin(),ivec.end()); 
　　copy(ivec.begin(),ivec.end(),ostream_iterator<int>(cout," ")); 
　　system("pause"); 
　　return 0; 
} 
　　
//如果输入3 2 1 1 2 3，它的输出是1 2 3 2 3 3——没到达要求。 

//unique只是把重复的元素放到容器的后面，而它本身会返回一个迭代器，只向这些元素的开始部分。
//因此要向真正删除这些元素，还是要“手工”处理一下。对于上面的例子，可以用vector窗口的erase： 
int main(){ 
    vector<int> ivec; 
    copy(istream_iterator<int>(cin),istream_iterator<int>(),back_inserter(ivec)); 
    sort(ivec.begin(),ivec.end()); 
    vector<int>::iterator iter=unique(ivec.begin(),ivec.end()); 
    ivec.erase(iter,ivec.end()); 
    copy(ivec.begin(),ivec.end(),ostream_iterator<int>(cout," ")); 
    system("pause"); 
    return 0; 
}
