class ListNode{
	public int val;
	public ListNode next;
}

public class ListInterview1{
	
	// 	链表分割
	// 1、遍历整个链表，根据结点的值和x的关系，分别插入到一个小于x的链表和一个大于等于x的链表中
	// 2、直接把小于和大于等于的链表接起来
	//	特殊性：
	//		1、整个链表都是空的
	//		2、没有小于x的
	//		3、没有大于等于x的
	public ListNode partition(ListNode head,int x){
		if(head==null){
			return null;
		}
		ListNode small = null;
		ListNode big = null;
		ListNode smallLast = null;
		ListNode bigLast = null;
		ListNode nextNode = null;
		for(ListNode cur=head;cur!=null;cur=nextNode){
			nextNode = cur.next;
			if(cur.val<x){
				if(small==null){
					small = cur;
					//smallLast = cur;
				}else{
					smallLast.next = cur;
					//smallLast = smallLast.next;
				}
				//两步合为一步
				smallLast = cur;
			}else{
				if(big==null){
					big = cur;
					//bigLast = cur;
				}else{
					bigLast.next = cur;
					//bigLast = bigLast.next;
				}
				bigLast = cur;
			}
		}
		if(smallLast==null){
			return big;
		}
		
		//需要保证链表的最后一个结点的next==null
		if(bigLast!=null){
			bigLast.next = null;
		}
		smallLast.next = big;
		return small;
	}
	
	public ListNode deleteDuplication(ListNode pHead){
		if(pHead==null){
			return null;
		}
		// 设置一个假的头结点，适应最前面的结点就是重复（需要被删除）
		ListNode preNode = new ListNode(0);
		preNode.next = pHead;
		ListNode fake = preNode;
		ListNode p1 = pHead;
		ListNode p2 = pHead.next;
		while(p2!=null){
			if(p1.val != p2.val){
				//若p1.val != p2.val，则先让preNode=p1（p1和p2都不相等，肯定和后面的也不相等————排好序的），再将p1，p2都往后移动一位
				preNode = p1;
				p1 = p1.next;
				p2 = p2.next;
			}else{
				// 该循环的退出条件：p2要么为空，要么不等于p1
				// 根据短路定律，需要先判断p2是否为null
				while(p2 != null&&p2.val == p1.val){
					p2 = p2.next;
				}
				preNode.next = p2;
				p1 = p2;
				if(p2!=null){
					p2 = p2.next;
				}
			}
		}
		return fake.next;
	}
	
	

}

