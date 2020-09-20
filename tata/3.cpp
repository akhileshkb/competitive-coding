#include<bits/stdc++.h>

using namespace std;

struct node
{
	node* parent;
	unsigned int key;
	unsigned int road=0;
	unsigned int num;
};

vector<pair<unsigned int,unsigned int>> weight1;
vector<node*> vnode;
vector<unsigned int> vertex;

void make_set(unsigned int y)
{
	node* x = new node();
	x->parent = x;
	x->key = y;
	x->num = 1;
	vnode.push_back(x);
}

node* find_set(node* x)
{
	node* y = x;
	while(x->parent!=x){
		// x->num=x->parent->num;
		x=x->parent;//=find_set(x->parent);
	}
	y->num = x->num;
	return x;
}

void link(node *x,node* y)
{
	node* p = find_set(x);
	node* q = find_set(y);
	q->parent = p;
	p->num = p->num + q->num;
	q->num = p->num;
	// if(p->rank>q->rank)
	// 	q->parent=p;
	// else
	// { 
	// 	p->parent=q;
	// 	if(p->rank==q->rank)
	// 		q->rank+=1;
	// }

}

node* find_node(unsigned int y)
{
	for(unsigned int i=0;i<vnode.size();i++)
	{
		if(vnode[i]->key==y)
			return vnode[i];
	}
}

int main()
{
	unsigned int n;
	unsigned int m;
	cin>>n>>m;
	for(unsigned int j=0;j<m;j++)
	{
		pair<unsigned int,unsigned int> temp;
		cin>>temp.first>>temp.second;
		weight1.push_back(temp);
		unsigned int i,flag1=1,flag2=1;
		unsigned int x=temp.first;
		unsigned int y=temp.second;
		for(i=0;i<vertex.size();i++)
		{
			if(x==vertex[i])
			{
				flag1=0;
				break;
			}
		}
		if(flag1)
			vertex.push_back(x);
		for(i=0;i<vertex.size();i++)
		{
			if(y==vertex[i])
			{
				flag2=0;
				break;
			}
		}
		if(flag2)
			vertex.push_back(y);
	}
	for(unsigned int i=0;i<vertex.size();i++)
		make_set(vertex[i]);
	unsigned int a=0;
	for(unsigned int i=0;i<weight1.size();i++)
	{
		unsigned int x=weight1[i].first;
		unsigned int y=weight1[i].second;
		node* p = find_node(x);
		node* q = find_node(y);
		if(find_set(p)!=find_set(q))
		{
			link(p,q);
			a++;
		}
	}
	for(unsigned int i=0;i<vnode.size();i++)
	{
		vnode[i]->num = find_set(vnode[i])->num;
		vnode[i]->parent = find_set(vnode[i]);
	}
	// for(int i=0;i<vnode.size();i++)
	// {
	// 	cout<<vnode[i]->num<<vnode[i]->parent->key<<endl;
	// }
	for(unsigned int i=0;i<weight1.size();i++)
	{
		unsigned int x=weight1[i].first;
		unsigned int y=weight1[i].second;
		node* p = find_node(x);
		node* q = find_node(y);
		p->parent->road = p->parent->road + 1;
	}
	// for(int i=0;i<vnode.size();i++)
	// {
	// 	cout<<vnode[i]->num<<vnode[i]->parent->road<<endl;
	// }
	vector<pair<unsigned int,unsigned int>> needed;
	for(unsigned int i=0;i<vnode.size();i++)
	{
		// pair<int,int> temp;
		unsigned int flag=1;
		for(unsigned int j=0;j<needed.size();j++)
		{
			if(vnode[i]->parent->key==needed[j].first)
			{
				flag=0;
				break;
			}
		}
		if(flag)
		{
			pair<unsigned int,unsigned int> temp;
			temp.first = vnode[i]->parent->key;
			temp.second = vnode[i]->parent->road;
			needed.push_back(temp);
		}
	}
	for(unsigned int i=0;i<needed.size();i++)
	{
		// cout<<needed[i].first<<needed[i].second<<endl;
		node* p = find_node(needed[i].first);
		// int k = p->num;
		unsigned int road1 = (p->num)*((p->num)-1)/2;
		// cout<<road1;
		road1 = road1 - p->road;
		needed[i].second = road1;
		// cout<<needed[i].first<<needed[i].second<<endl;
	}
	unsigned int sum=0;
	for(unsigned int i=0;i<needed.size();i++)
	{
		sum = sum + needed[i].second;
	}
	cout<<sum;
}