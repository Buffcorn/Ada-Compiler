-- arrT.ada

procedure outside is
   a : integer;       --offset is 4
   type w is array(0..2) of integer;
   d : w;             --offset is 5, size is 3
   type far is array(4..7) of integer;
   b : integer;       --offset is 8
                      --size of AR is 9 (4+1+3+1)
   procedure inside is
      c : far;    --offset is 4
   begin -- sized of AR is 8 (4+4).
      d(1) := c(5);
      c(7) := d(0);
   end;

begin
   a := 17;
   inside;
   a := d(1);
   d(2) := 67;
end;
