class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode *OddH=NULL, *OddT=NULL, *EvenT=NULL , *EvenH=NULL;
        int count=1;
        while(head!=NULL){
            if(count%2==0){
                if(EvenH==NULL){
                    EvenH=head;
                    EvenT=head;
                    head=head->next;
                }
                else{
                    EvenT->next=head;
                    EvenT=EvenT->next;
                    head=head->next;
                }
            }
            else{
                if(OddH==NULL){
                    OddH=OddT=head;
                    head=head->next;
                }
                else{
                    OddT->next=head;
                    OddT=OddT->next;
                    head=head->next;
                }
            }
            count++;
        }
        if(OddH==NULL){
            return EvenH;
        }
        if(EvenH==NULL){
            return OddH;
        }
        EvenT->next=NULL;
        OddT->next=EvenH;
        return OddH;
    }
};
