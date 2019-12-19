-- nonLocalArr.ada

procedure Fool is
   A : integer;       --offset is 4
   type W is array(0..2) of integer;
   D : W;             --offset is 5, size is 3
   B : integer;       --offset is 8
                      --size of AR is 9 (4+1+3+1)
   procedure Green is
      C : boolean;    --offset is 4
   begin -- This is a comment.
      A := D(2);
      D(A) := 74;
   end;

begin
   Green;
end;
