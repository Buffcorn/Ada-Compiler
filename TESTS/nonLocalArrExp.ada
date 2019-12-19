-- nonLocalArr.ada

procedure Fool is
   A : integer;       --offset is 4
   type W is array(7..9) of integer;
   D : W;             --offset is 5, size is 3
   B : integer;       --offset is 8
                      --size of AR is 9 (4+1+3+1)
   procedure Green is
      C : boolean;    --offset is 4
   begin -- This is a comment.
      A := D(9);
      D(A) := 74;
      A := D(B);
   end;

begin
   B := A ** A;
   Green;
end;
