class Node{
	private int val;
	private Node next;
	
	public Node(int val){
		this.val = val;
	}
}

public class ListReview{

	// 逆置链表————遍历整个结点，依次头插到新链表
	ListNode reverseList(ListNode head){
		if(head == null){
			return null;
		}
		ListNode newHead = null;
		ListNode nextNode = null;
		for(ListNode cur=head;cur!=null;cur=nextNode){
			nextNode = cur.next;
			cur.next = newHead;
			newHead = cur;
		}
		return newHead;
	}
	
	// 逆置链表————三个引用法
	ListNode reverseList(ListNode head){
		ListNode n1 = null;
		ListNode n2 = head;
		ListNode n3 = head.next;
		
		while(n2!=null){
			n2.next = n1;
			n1 = n2;
			n2 = n3;
			if(n3!=null){
				n3 = n3.next;
			}
		}
		
		return n1;
	}
	
	// 移除链表中值为val的元素
	ListNode removeAll(ListNode head,int val){
		if(head == null){
			return null;
		}
		ListNode newHead = null;
		ListNode lastNode = null;
		ListNode nextNode = null;
		for(ListNode cur=head;cur!=null;cur = nextNode){
			nextNode = cur.next;
			if(cur.val != val){
				if(newHead == null){
					cur.next = newHead;
					newHead = cur;
				}else{
					lastNode.next = cur;
				}
				lastNode = cur;
			}
		}
		//如果lastNode（最后一个元素）不为null，就要将lastNode.next指向null，否则还是指向原来的结点
		if(lastNode!=null){
			lastNode.next = null;
		}
		return newHead;
	}
	
	// 有序链表合并 ————从小到大排序
	ListNode merge(ListNode head1,ListNode head2){
		
		// 提前处理好l1==null或l2==null的情况，最后的情况是在用lastNode.next处理，
		// 如果当前l1==null或l2==null则不会进入while循环而直接进入最后面的判断，而那时的lastNode==null，不能取next
        if(l1 == null){
			return l2;
		}
		if(l2 == null){
			return l1;
		}
		ListNode newHead = null;
		ListNode lastNode = null;
		ListNode n1 = l1;
		ListNode n2 = l2;
        // 无论是n1还是n2，都会改变next的指向，所以在改变指向前先用nextNode对当前结点的next进行保存
        ListNode nextNode = null;
		
		while(n1!=null&&n2!=null){
			if(n1.val < n2.val){
                nextNode = n1.next;
				if(newHead == null){
					n1.next = newHead;
					newHead = n1;
				}else{
					lastNode.next = n1;
				}
				lastNode = n1;
				n1 = nextNode;
			}else{
                nextNode = n2.next;
				if(newHead == null){
					n2.next = newHead;
					newHead = n2;
				}else{
					lastNode.next = n2;
				}
				lastNode = n2;
				n2 = nextNode;
			}
		}
		
		if(n1 == null){
			lastNode.next = n2;
		}
		if(n2 == null){
			lastNode.next = n1;
		}
		
		return newHead;
	}
	
	// 删除链表中重复的结点，重复的结点不保留
	ListNode deleteDuplicate(ListNode head){
		if(head == null){
			return null;
		}
		ListNode preNode = null;
		ListNode slowNode = head;
		ListNode fastNode = head.next;

		while(fastNode!=null){
			// 只有当fastNode和slowNode不相同时，将preNode，slowNode，fastNode，同时后移，注意次序
			if(fastNode.val != slowNode.val){
				preNode = slowNode;
				slowNode = fastNode;
				fastNode = fastNode.next;
			}else{
				//当fastNode和slowNode相等时，将fastNode移至与slowNode不相等，并且将preNode.next设置为fastNode
				//注意当preNode为null的情况，再将fastNode和slowNode后移
				while(fastNode!=null&&fastNode.val == slowNode.val){
					fastNode = fastNode.next;
				}
				slowNode = fastNode;
				if(preNode == null){
					head = fastNode;
				}else{
					// 将中间部分删掉
					preNode.next = fastNode;
				}
				if(fastNode!=null){
					fastNode = fastNode.next;
				}
				
			}
		}
		return head;
	}
}
