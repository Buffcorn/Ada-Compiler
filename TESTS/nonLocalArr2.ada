-- nonLocalArr2.ada

procedure Fool is
   A : integer;       --offset is 4
   type W is array(12..14) of integer;
   D : W;             --offset is 5, size is 3
   B : integer;       --offset is 8
                      --size of AR is 9 (4+1+3+1)
   procedure Green is
      C : boolean;    --offset is 4
   begin -- This is a comment.
      A := D(12);
      D(A) := 74;
      B := D(B);
   end;

begin
   Green;
end;
