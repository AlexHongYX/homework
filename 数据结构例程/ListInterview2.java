class Node{
	public int val;
	public Node next;
	public Node random;
	
	public Node(){}
	
	public Node(int val,Node next,Node random){
		this.val = val;
		this.next = next;
		this.random = random;
	}
}

public class ListInterview2{
	
	//带random的链表的复制
	//	1、先复制，不管random
	//	2、复制random
	//	3、拆分链表
	public Node copyRandomList(Node head){
		if(head == null){
			return null;
		}
		Node cur = head;
		while(cur!=null){
			Node node = new Node(cur.val);
			
			//将新创建的node插入到每个结点的后面（注意次序）
			node.next = cur.next;
			cur.next = node;
			
			//将cur指向老的链表的下一个结点
			cur = cur.next.next;
		}
		
		cur = head;
		//复制random
		while(cur != null){
			if(cur.random != null){
				cur.next.random = cur.random.next;
			}else{
				//random有可能指向null
				cur.next.random = null;
			}
			
			//将cur指向老的链表的下一个结点
			cur = cur.next.next;
		}
		
		//把head为头结点的链表拆分为 老链表+新链表
		cur = head;
		//记录一下新链表的头结点
		Node newHead = head.next;
		while(cur != null){
			//将链表拆开，要改变两个next的指向
			Node node = cur.next;
			cur.next = node.next;
			if(node.next != null){
				node.next = node.next.next;
			}
			/*
			else{
				node.next = null	默认值
			}
			*/
			
			//将cur指向老的链表的下一个结点（cur已经改变过了）
			cur = cur.next;
		}
		
		return newHead;
	}
}
