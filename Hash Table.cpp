// CPP program to implement hashing with chaining
#include<bits/stdc++.h>
using namespace std;

class Hash
{
	int BUCKET; // No. of buckets

	// Pointer to an array containing buckets
	vector<list<int>> table;
public:
	Hash(int V){
		BUCKET=V;
		table.resize(V);
	} // Constructor

	// inserts a key into hash table
	void insertItem(int x){
		int index=hashFunction(x);
		table[index].push_back(x);
	}

	// deletes a key from hash table
	void deleteItem(int key){
		int index=hashFunction(key);

		int found=false;

		list<int>::iterator i;

		for( i=table[index].begin();i!=table[index].end();i++){
			if(*i==key)
			{
				found=true;
				break;
			}
		}
		if(found)
		table[index].erase(i);
		else
		cout<<"element not found";

	}

	// hash function to map values to key
	int hashFunction(int x) {
		return (x % BUCKET);
	}

	void displayHash(){
		for(int i=0;i<BUCKET;i++){
        
		  cout<<i;
		  for(auto x:table[i])
		  cout<<"->"<<x;
		  cout<<endl;

		}
	}
};

// Driver program
int main()
{
// array that contains keys to be mapped
int a[] = {15, 11, 27, 8, 12};
int n = sizeof(a)/sizeof(a[0]);

// insert the keys into the hash table
Hash h(7); // 7 is count of buckets in
			// hash table
for (int i = 0; i < n; i++)
	h.insertItem(a[i]);

// delete 12 from hash table
h.deleteItem(12);

// display the Hash table
h.displayHash();

return 0;
}
