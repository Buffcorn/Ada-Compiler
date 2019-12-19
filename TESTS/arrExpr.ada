-- arrExpr.ada

procedure outside is
   a : integer;       --offset is 4
   type w is array(0..2) of integer;
   d : w;             --offset is 5, size is 3
   type far is array(4..7) of integer;
   b : integer;       --offset is 8
   c : far;           --offset is 9
       -- sized of AR is 13 (4+1+3+1+4).

begin
   d(1) := 17;
   a := c(7) + 5 - c(4);
   c(6) := d(0);
end;
