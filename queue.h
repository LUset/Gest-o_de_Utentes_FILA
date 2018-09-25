#ifndef QUEUE_H
#define QUEUE_H

using namespace std;

template <class P>
class Queue {
//dados publicos, construtor/destrutor mais declarações
public:
	//construtor
	Queue(int sizeQueue) {
		head = 0;
		tail = -1;
		size = sizeQueue;
		queue = new P[size];
	}
	//Destrutor
	~Queue() {
		delete[] queue; 
	}
	int isEmpty();			//vazio
	int fullQueue();		//cheio
	void enqueue();			//entrar na fila
	void dequeue();			//sair da fila
	void first();			//primeiro
	void last();			//ultimo
	void printList();		//imprimir lista completa
//dados privados
private:
	int head, tail;
	P *queue;
	int size;
};

//defenição da função isEmpty();
template <class P>
int Queue<P>::isEmpty() {
	if (head == 0 && tail == -1) return 1;
	else return 0;
}
//defenição da função fullQueue();
template <class P>
int Queue<P>::fullQueue() {
	if (tail == size - 1) return 1;
	else return 0;
}
//defenição da função enqueue();
template <class P>
void Queue<P>::enqueue() {
	P elemento; //elemento == utente
	if (fullQueue())
		cout << "Fila cheia!!!";
	else {
		cout << "\nUtente introduzido, ENTER para continuar!!!";
		srand(time(0));
		elemento = rand() % 1000 + 1;
		queue[++tail] = elemento;
		cin.ignore();
		cin.ignore();
	}
}
//defenição da função dequeue();
template <class P>
void Queue<P>::dequeue() {
	if (isEmpty())
		cout << "\nFila vazia!!!";
	else {
		cout << "\nUtente " << queue[head++] << " atendido!!!";
		cout << "\nENTER para continuar!!!";
		cin.ignore();
		cin.ignore();
	}
}
//defenição da função first();
template <class P>
void Queue<P>::first() {
	if (isEmpty())
		cout << "\nFila vazia!!!";
	else {
		cout << "\nPrimeiro utente da fila : " << queue[head] <<" ENTER para continuar!!!";
		cin.ignore();
		cin.ignore();
	}
}
//defenição da função last();
template <class P>
void Queue<P>::last() {
	if (isEmpty())
		cout << "\nFila vazia!!!";
	else {
		cout << "\nUltimo utente da fila : " << queue[tail] << " ENTER para continuar!!!";
		cin.ignore();
		cin.ignore();
	}
}
//defenição da função printList();
template <class P>
void Queue<P>::printList() {
	if (isEmpty())
		cout << "\nFila vazia!!!";
	else {
		cout << "\nUtentes em fila de espera :  ";
		for (int i = head; i <= tail; i++) {
			cout << "\t" << queue[i];
		}
	}
}


#endif // !QUEUE_H
