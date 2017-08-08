/*

Author: Seongmin Jeong (Allen)
Goal: design node to use kinds of data structure

ver 1.0: used namespace, template, class

*/

#ifndef __ALLEN_NODE_H__
#define __ALLEN_NODE_H__

namespace jsm {
	template <typename T>
	class Node {
	private:
		T data;
		Node<T> *link;
	public:
		Node() : link(NULL) {}

		void setData(T _data) {
			data = _data;
		}

		T getData() {
			return data;
		}

		void setLink(Node<T> *_link) {
			link = _link;
		}

		Node<T>* getLink() {
			return link;
		}

		~Node() {}

	};
}

#endif