// A simple custom vector class made in C++
// By Ben a.k.a DreamVB
// LastUpdate 21:49 26/04/2021

using namespace std;

template <typename T> class BVector{
private:
	T *Items;
	size_t capacity;
	size_t position;
public:
	BVector(){
		Items = new T[1];
		capacity = 1;
		position = 0;
	}
	~BVector(){
		delete[] Items;
	}

	void clear(){
		//Destroy array
		delete[] Items;
		//Create array size 1
		Items = new T[1];
		capacity = 1;
		position = 0;
	}

	void push_back(T data){
		size_t z = 0;

		if (position == capacity){
			//Resize items array
			T* temp = new T[2 * capacity];
			//Copy the items in the array to a temp array
			while (z < capacity){
				temp[z] = Items[z];
				z++;
			}
			//Delete items
			delete[] Items;
			//Increase v size
			capacity *= 2;
			//Set items to temp
			Items = temp;
		}
		//Add the new item
		Items[position] = data;
		//Inc items array index
		position++;
	}

	void push_back(size_t n, T data){
		if (n == capacity){
			//Push item at end of array
			push_back(data);
		}
		else{
			//Insert item at position
			Items[n] = data;
		}
	}

	void pop_back(){
		return arr[Index-- - 1];
	}

	T get(size_t n) const{
		//Check if n is less then index
		if (n < position){
			//Return item
			return Items[n];
		}
	}

	void swap(size_t left, size_t right){
		T tmp;
		//Swap array items.
		tmp = Items[left];
		Items[left] = Items[right];
		Items[right] = tmp;
	}

	T operator[](size_t n){
		if (n >= position){
			std::cout << "Vector Index Out Of Bounds." << std::endl;
			exit(0);
		}
		return Items[n];
	}

	size_t size(){
		//Return our vector size
		return position;
	}

	size_t get_capacity(){
		return capacity;
	}
};