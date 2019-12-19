-- mixed.ada

procedure fool is
   a : integer;       --offset is 4
   type w is array(0..2) of integer;
   d : w;             --offset is 5, size is 3
   b : integer;       --offset is 8
                      --size of AR is 9 (4+1+3+1)
   procedure green is
      c : boolean;    --offset is 4
   begin -- This is a comment.
      a := 5;
      b := -(a+2);
      a := not b;
      c := true;
      write(5,a);
      read(b);
   end;

begin
   a := 5 ** 2;
   loop
      exit;
   end loop;
   if a = b then
      if a = b then
         null;
      end if;
      a := d(1);
      d(2) := 5;
   end if;
   green;
end;
