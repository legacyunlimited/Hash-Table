#pragma once
#include <iostream>
using namespace std;
template <typename T1,typename T2>
class HashNode {
private:
	T1 key;
	T2 data;
public:
	HashNode* chainNext;
	HashNode() {
		this->chainNext = nullptr;
	}
	HashNode(T1 k, T2 d) {
		this->key = k;
		this->data = d;
		this->chainNext = nullptr;
	}
	T1 getKey() {
		return this->key;
	}
	T2 getData() {
		return this->data;
	}
	void setKey(T1 k) {
		this->key = k;
	}

	void setData(T2 data) {
		this->data = data;
	}
	void printHashNode() {
		cout << "Key : " << this->key << " Data : " << this->data << endl;
		HashNode* ptr = this;
		cout << "In chainig :: ";
		while (ptr->chainNext != nullptr) {
			cout<< "Key : " << ptr->key << " Data : " << ptr->data <<" --> ";
			ptr = ptr->chainNext;
		}
		cout << " End" << endl;
	}
};