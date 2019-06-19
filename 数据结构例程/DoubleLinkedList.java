class DNode{
	private int val;
	private DNode prev;	// 指向前驱结点，如果是第一个结点，则是null
	private DNode next;	// 指向后继结点，如果是最后一个结点，则是null
	
	public DNode(int val){
		this.val = val;
	}
}

public class DoubleLinkedList{
	
	private DNode head;	// 链表头结点，没有结点时为null
	private DNode last;	// 链表尾结点，没有结点时为null
	private int size;	// 链表长度，没有结点时为0
	
	// 头插
	public void pushFront(int val){
		DNode node = new DNode(val);
		node.next = head;
		// head.prev = node;-
		head = node;
		if(last == null){
			last = node;
		}
		size++;
	}
	
	// 尾插
	//	1、没有结点（用头插即可）
	//	2、有节点，直接插
	public void pushBack(int val){
		DNode node = new DNode(val);
		if(last == null){
			pushFront(node);
		}else{
			//不但要给last.next赋值，还要给node.prev赋值
			last.next = node;
			node.prev = last;
			last = last.next;
			//last==null的情况，在pushFront中已经给size++了
			size++;
		}
	}
	
	// 头删
	public void popFront(){
		if(head == null){
			return;
		}else{
			head = head.next;
			if(head == null){
				last = null;
			}
			size--;
		}
	}
	
	/*
		head = head.next;
		// 若删除head后没有结点了（即head==null），将last也设为null
		if(head == null){
			last = null;
		}else{
			head.prev = null;
		}
		size--;
	*/
	
	// 尾删
	//	1、没有结点
	//	2、只有一个结点，用头删
	//	3、多个结点尾删
	public void popBack(){
		if(head == null){
			return;
		}else if(head.next == null){
			popFront();
		}else{
			last = last.prev;
			last.next = null;
			size--;
		}
	}
}