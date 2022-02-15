#pragma once
#include "Node.h"
#include <iostream>
using namespace std;
template <typename T1, typename T2>
class HashTable
{
private:
	int bucketSize;
public:
	HashNode<T1,T2> **table;
	/*
	
		Phase 1 Code

	*/
	HashTable(int size) {
		this->bucketSize = size;
		table = new HashNode<T1,T2>*[this->bucketSize];
		
		for (int i = 0; i < this->bucketSize; i++) 			
			this->table[i] = nullptr;
	}
	void insertByChaining(HashNode<T1,T2>* ptr) {
		int index = hashFunction(ptr->getKey());
		if (this->table[index] == nullptr) this->table[index] = ptr;
		else {
			HashNode<T1, T2>* rptr = this->table[index];
			while (rptr->chainNext!=nullptr)
			{
				rptr = rptr->chainNext;
			}
			rptr->chainNext = ptr;
		}
	}
	
	int hashFunction(T1 key) {
		return key % this->bucketSize;
	}
	
	HashNode<T1, T2>* search(T1 key, T2 data) {
		int index = hashFunction(key);
		HashNode <T1, T2>* ptr = this->table[index];
		if (ptr == nullptr)return ptr;
		while (ptr->getData() != data) ptr = ptr->chainNext;
		return ptr;
	}


	HashNode<T1, T2>* searchByKey(T1 key) {
		int index = hashFunction(key);
		HashNode <T1, T2>* ptr = this->table[index];
		return ptr;
	}

	HashNode<T1, T2>* deleteByKey_Data(T1 key, T2 data) {
		int index = hashFunction(key);
		HashNode <T1, T2>* ptr = this->table[index];
		HashNode<T1, T2>* bptr = ptr;
		if (ptr == nullptr)return ptr;
		while (ptr->getData() != data) { bptr = ptr; ptr = ptr->chainNext; }
		if (ptr == this->table[index])
			this->table[index] = ptr->chainNext;
		else
			bptr->chainNext = ptr->chainNext;
		ptr->chainNext = nullptr;
		return ptr;
	}
	HashNode<T1, T2>* deleteByKey(T1 key) {
		int index = hashFunction(key);
		HashNode <T1, T2>* ptr = this->table[index];
		if (ptr == nullptr)return ptr;
		this->table[index] = ptr->chainNext;
		ptr->chainNext = nullptr;
	}

	/**
		
		Phase 2 Code
	
	**/
	
	int insertByLinearProbing(HashNode<T1,T2> *ptr) {
		int index = hashFunction(ptr->getKey());
		int initialInndex = index;
		int key = ptr->getKey();
		while (this->table[index]!=nullptr )
		{
			if (this->table[index]->getKey() == ptr->getKey()) {
				this->table[index] = ptr;
				return 1;
			}
			index = hashFunction(++key);
			if (index == initialInndex) { 
				return -1;
			}
		}
		this->table[index] = ptr;
		return 1;
	}

	bool deleteByKeyLinear(T1 key) {
		int index = hashFunction(key);
		int initial = index;
		while (this->table[index] != nullptr) {
			HashNode <T1, T2>* ptr = this->table[index];
			if (ptr->getKey() == this->table[index]->getKey()) {
				this->table[index] = nullptr;
				return true;
			}
			key = key + 1;
			if (initial == index)return false;
		}
	}

	HashNode<T1, T2>* SearchByKeyLinear(T1 key) {
		int index = hashFunction(key);
		int initial = index;
		HashNode <T1, T2>* ptr = this->table[index];
		while (this->table[index] != nullptr) {
			if (ptr->getKey() == this->table[index]->getKey()) return ptr;
			key = key + 1;
			if (initial == index)return nullptr;
		}
		return ptr;
	}


	int insertByQuadreticProbing(HashNode<T1, T2>* ptr) {
		int index = hashFunction(ptr->getKey());
		int key = ptr->getKey();
		int i = 1;
		while (i<this->bucketSize)
		{
			if (this->table[index]== nullptr) {
				this->table[index] = ptr;
				return 1;
			}
			key = key + (i * i);
			index = hashFunction(key);
			i++;
		}
		return -1;
	}


	HashNode<T1, T2>* SearchByKeyQuadretic(T1 key) {
		int index = hashFunction(key);
		int i = 1;
		while (i < this->bucketSize)
		{
			if (this->table[index]) {
				if (this->table[index]->getKey() == key) {
					return this->table[index];
				}
			}
			key = key + (i * i);
			index = hashFunction(key);
			i++;
		}
		return nullptr;
	}


	bool deleteByKeyQuadretic(T1 key) {
		int index = hashFunction(key);
		int i = 1;
		while (i < this->bucketSize)
		{
			if (this->table[index] != nullptr) {
				if (this->table[index]->getKey() == key) {
					this->table[index] = nullptr;
					return true;
				}
			}
			key = key + (i * i);
			index = hashFunction(key);
			i++;
		}
		return false;
	}

	
	void printTable() {
		for (int i = 0; i < this->bucketSize; i++) {
			cout << "**********At Index "<<(i + 1)<<" ************" << endl;
			if (this->table[i] != nullptr) this->table[i]->printHashNode();
			else
				cout << "<--No Data Present-->" << endl;
		}
	}
};
