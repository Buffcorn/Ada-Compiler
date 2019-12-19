procedure fool is    --power1.ada
   a,b:integer;
   type w is array(0..2) of integer;
   procedure green is
      c:boolean;
   begin -- This is a comment.
      a := 5;
      b := 5+2;
      a := b;
      c := true;
   end;
begin
   a := 5 ** 2;
   green;
end;
