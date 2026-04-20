template <typename T>
struct Node {
	T data;
	Node* next;
};

template <typename T>
struct LinkedList {
	Node<T>* head;
	void Show();
};

template <typename T>
void LinkedList<T>::Show() {
	if (head == NULL) {
		cout << "NO item available" << endl;
		return false;
	}
	Node<T>* item = head;
	while (item != NULL) {
		cout << item->data << endl;
		item = item->next;
		delete item;
		return true;
	}
	While (item->next != NULL) {
		if (item->next->data.id == id) {
			Node<T>* temp = item->next;
			item->next = item->next->next;
			delete temp;
		}
		item = item->next;
	}
	return false;
}
