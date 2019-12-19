-- range.ada
procedure main is
   b      : integer;
   type Wray is array(0..2) of integer;
   type Ranger is range 0 .. 44;
   a : Ranger;
   c : Wray;

begin
   a := 102;
   b := 114;
   a := b;
   a := c( 4 ) + 2;
   c( a ) := 6;
end;
