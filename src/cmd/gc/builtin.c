// AUTO-GENERATED by mkbuiltin; DO NOT EDIT
char *runtimeimport =
	"package runtime\n"
	"import runtime \"runtime\"\n"
	"func @\"\".new (@\"\".typ·2 *byte) (? *any)\n"
	"func @\"\".panicindex ()\n"
	"func @\"\".panicslice ()\n"
	"func @\"\".throwreturn ()\n"
	"func @\"\".throwinit ()\n"
	"func @\"\".panicwrap (? string, ? string, ? string)\n"
	"func @\"\".panic (? interface {})\n"
	"func @\"\".recover (? *int32) (? interface {})\n"
	"func @\"\".printbool (? bool)\n"
	"func @\"\".printfloat (? float64)\n"
	"func @\"\".printint (? int64)\n"
	"func @\"\".printuint (? uint64)\n"
	"func @\"\".printcomplex (? complex128)\n"
	"func @\"\".printstring (? string)\n"
	"func @\"\".printpointer (? any)\n"
	"func @\"\".printiface (? any)\n"
	"func @\"\".printeface (? any)\n"
	"func @\"\".printslice (? any)\n"
	"func @\"\".printnl ()\n"
	"func @\"\".printsp ()\n"
	"func @\"\".goprintf ()\n"
	"func @\"\".concatstring ()\n"
	"func @\"\".cmpstring (? string, ? string) (? int)\n"
	"func @\"\".eqstring (? string, ? string) (? bool)\n"
	"func @\"\".intstring (? int64) (? string)\n"
	"func @\"\".slicebytetostring (? []byte) (? string)\n"
	"func @\"\".slicerunetostring (? []rune) (? string)\n"
	"func @\"\".stringtoslicebyte (? string) (? []byte)\n"
	"func @\"\".stringtoslicerune (? string) (? []rune)\n"
	"func @\"\".stringiter (? string, ? int) (? int)\n"
	"func @\"\".stringiter2 (? string, ? int) (@\"\".retk·1 int, @\"\".retv·2 rune)\n"
	"func @\"\".copy (@\"\".to·2 any, @\"\".fr·3 any, @\"\".wid·4 uintptr) (? int)\n"
	"func @\"\".slicestringcopy (@\"\".to·2 any, @\"\".fr·3 any) (? int)\n"
	"func @\"\".typ2Itab (@\"\".typ·2 *byte, @\"\".typ2·3 *byte, @\"\".cache·4 **byte) (@\"\".ret·1 *byte)\n"
	"func @\"\".convI2E (@\"\".elem·2 any) (@\"\".ret·1 any)\n"
	"func @\"\".convI2I (@\"\".typ·2 *byte, @\"\".elem·3 any) (@\"\".ret·1 any)\n"
	"func @\"\".convT2E (@\"\".typ·2 *byte, @\"\".elem·3 any) (@\"\".ret·1 any)\n"
	"func @\"\".convT2I (@\"\".typ·2 *byte, @\"\".typ2·3 *byte, @\"\".cache·4 **byte, @\"\".elem·5 any) (@\"\".ret·1 any)\n"
	"func @\"\".assertE2E (@\"\".typ·2 *byte, @\"\".iface·3 any) (@\"\".ret·1 any)\n"
	"func @\"\".assertE2E2 (@\"\".typ·3 *byte, @\"\".iface·4 any) (@\"\".ret·1 any, @\"\".ok·2 bool)\n"
	"func @\"\".assertE2I (@\"\".typ·2 *byte, @\"\".iface·3 any) (@\"\".ret·1 any)\n"
	"func @\"\".assertE2I2 (@\"\".typ·3 *byte, @\"\".iface·4 any) (@\"\".ret·1 any, @\"\".ok·2 bool)\n"
	"func @\"\".assertE2T (@\"\".typ·2 *byte, @\"\".iface·3 any) (@\"\".ret·1 any)\n"
	"func @\"\".assertE2T2 (@\"\".typ·3 *byte, @\"\".iface·4 any) (@\"\".ret·1 any, @\"\".ok·2 bool)\n"
	"func @\"\".assertI2E (@\"\".typ·2 *byte, @\"\".iface·3 any) (@\"\".ret·1 any)\n"
	"func @\"\".assertI2E2 (@\"\".typ·3 *byte, @\"\".iface·4 any) (@\"\".ret·1 any, @\"\".ok·2 bool)\n"
	"func @\"\".assertI2I (@\"\".typ·2 *byte, @\"\".iface·3 any) (@\"\".ret·1 any)\n"
	"func @\"\".assertI2I2 (@\"\".typ·3 *byte, @\"\".iface·4 any) (@\"\".ret·1 any, @\"\".ok·2 bool)\n"
	"func @\"\".assertI2T (@\"\".typ·2 *byte, @\"\".iface·3 any) (@\"\".ret·1 any)\n"
	"func @\"\".assertI2T2 (@\"\".typ·3 *byte, @\"\".iface·4 any) (@\"\".ret·1 any, @\"\".ok·2 bool)\n"
	"func @\"\".assertI2TOK (@\"\".typ·2 *byte, @\"\".iface·3 any) (@\"\".ok·1 bool)\n"
	"func @\"\".assertE2TOK (@\"\".typ·2 *byte, @\"\".iface·3 any) (@\"\".ok·1 bool)\n"
	"func @\"\".ifaceeq (@\"\".i1·2 any, @\"\".i2·3 any) (@\"\".ret·1 bool)\n"
	"func @\"\".efaceeq (@\"\".i1·2 any, @\"\".i2·3 any) (@\"\".ret·1 bool)\n"
	"func @\"\".ifacethash (@\"\".i1·2 any) (@\"\".ret·1 uint32)\n"
	"func @\"\".efacethash (@\"\".i1·2 any) (@\"\".ret·1 uint32)\n"
	"func @\"\".equal (@\"\".typ·2 *byte, @\"\".x1·3 any, @\"\".x2·4 any) (@\"\".ret·1 bool)\n"
	"func @\"\".makemap (@\"\".mapType·2 *byte, @\"\".hint·3 int64) (@\"\".hmap·1 map[any]any)\n"
	"func @\"\".mapaccess1 (@\"\".mapType·2 *byte, @\"\".hmap·3 map[any]any, @\"\".key·4 any) (@\"\".val·1 any)\n"
	"func @\"\".mapaccess1_fast32 (@\"\".mapType·2 *byte, @\"\".hmap·3 map[any]any, @\"\".key·4 any) (@\"\".val·1 *any)\n"
	"func @\"\".mapaccess1_fast64 (@\"\".mapType·2 *byte, @\"\".hmap·3 map[any]any, @\"\".key·4 any) (@\"\".val·1 *any)\n"
	"func @\"\".mapaccess1_faststr (@\"\".mapType·2 *byte, @\"\".hmap·3 map[any]any, @\"\".key·4 any) (@\"\".val·1 *any)\n"
	"func @\"\".mapaccess2 (@\"\".mapType·3 *byte, @\"\".hmap·4 map[any]any, @\"\".key·5 any) (@\"\".val·1 any, @\"\".pres·2 bool)\n"
	"func @\"\".mapaccess2_fast32 (@\"\".mapType·3 *byte, @\"\".hmap·4 map[any]any, @\"\".key·5 any) (@\"\".val·1 *any, @\"\".pres·2 bool)\n"
	"func @\"\".mapaccess2_fast64 (@\"\".mapType·3 *byte, @\"\".hmap·4 map[any]any, @\"\".key·5 any) (@\"\".val·1 *any, @\"\".pres·2 bool)\n"
	"func @\"\".mapaccess2_faststr (@\"\".mapType·3 *byte, @\"\".hmap·4 map[any]any, @\"\".key·5 any) (@\"\".val·1 *any, @\"\".pres·2 bool)\n"
	"func @\"\".mapassign1 (@\"\".mapType·1 *byte, @\"\".hmap·2 map[any]any, @\"\".key·3 any, @\"\".val·4 any)\n"
	"func @\"\".mapiterinit (@\"\".mapType·1 *byte, @\"\".hmap·2 map[any]any, @\"\".hiter·3 *any)\n"
	"func @\"\".mapdelete (@\"\".mapType·1 *byte, @\"\".hmap·2 map[any]any, @\"\".key·3 any)\n"
	"func @\"\".mapiternext (@\"\".hiter·1 *any)\n"
	"func @\"\".mapiter1 (@\"\".hiter·2 *any) (@\"\".key·1 any)\n"
	"func @\"\".mapiter2 (@\"\".hiter·3 *any) (@\"\".key·1 any, @\"\".val·2 any)\n"
	"func @\"\".makechan (@\"\".chanType·2 *byte, @\"\".hint·3 int64) (@\"\".hchan·1 chan any)\n"
	"func @\"\".chanrecv1 (@\"\".chanType·2 *byte, @\"\".hchan·3 <-chan any) (@\"\".elem·1 any)\n"
	"func @\"\".chanrecv2 (@\"\".chanType·3 *byte, @\"\".hchan·4 <-chan any) (@\"\".elem·1 any, @\"\".received·2 bool)\n"
	"func @\"\".chansend1 (@\"\".chanType·1 *byte, @\"\".hchan·2 chan<- any, @\"\".elem·3 any)\n"
	"func @\"\".closechan (@\"\".hchan·1 any)\n"
	"func @\"\".selectnbsend (@\"\".chanType·2 *byte, @\"\".hchan·3 chan<- any, @\"\".elem·4 any) (? bool)\n"
	"func @\"\".selectnbrecv (@\"\".chanType·2 *byte, @\"\".elem·3 *any, @\"\".hchan·4 <-chan any) (? bool)\n"
	"func @\"\".selectnbrecv2 (@\"\".chanType·2 *byte, @\"\".elem·3 *any, @\"\".received·4 *bool, @\"\".hchan·5 <-chan any) (? bool)\n"
	"func @\"\".newselect (@\"\".size·2 int32) (@\"\".sel·1 *byte)\n"
	"func @\"\".selectsend (@\"\".sel·2 *byte, @\"\".hchan·3 chan<- any, @\"\".elem·4 *any) (@\"\".selected·1 bool)\n"
	"func @\"\".selectrecv (@\"\".sel·2 *byte, @\"\".hchan·3 <-chan any, @\"\".elem·4 *any) (@\"\".selected·1 bool)\n"
	"func @\"\".selectrecv2 (@\"\".sel·2 *byte, @\"\".hchan·3 <-chan any, @\"\".elem·4 *any, @\"\".received·5 *bool) (@\"\".selected·1 bool)\n"
	"func @\"\".selectdefault (@\"\".sel·2 *byte) (@\"\".selected·1 bool)\n"
	"func @\"\".selectgo (@\"\".sel·1 *byte)\n"
	"func @\"\".block ()\n"
	"func @\"\".makeslice (@\"\".typ·2 *byte, @\"\".nel·3 int64, @\"\".cap·4 int64) (@\"\".ary·1 []any)\n"
	"func @\"\".growslice (@\"\".typ·2 *byte, @\"\".old·3 []any, @\"\".n·4 int64) (@\"\".ary·1 []any)\n"
	"func @\"\".memmove (@\"\".to·1 *any, @\"\".frm·2 *any, @\"\".length·3 uintptr)\n"
	"func @\"\".memequal (@\"\".eq·1 *bool, @\"\".size·2 uintptr, @\"\".x·3 *any, @\"\".y·4 *any)\n"
	"func @\"\".memequal8 (@\"\".eq·1 *bool, @\"\".size·2 uintptr, @\"\".x·3 *any, @\"\".y·4 *any)\n"
	"func @\"\".memequal16 (@\"\".eq·1 *bool, @\"\".size·2 uintptr, @\"\".x·3 *any, @\"\".y·4 *any)\n"
	"func @\"\".memequal32 (@\"\".eq·1 *bool, @\"\".size·2 uintptr, @\"\".x·3 *any, @\"\".y·4 *any)\n"
	"func @\"\".memequal64 (@\"\".eq·1 *bool, @\"\".size·2 uintptr, @\"\".x·3 *any, @\"\".y·4 *any)\n"
	"func @\"\".memequal128 (@\"\".eq·1 *bool, @\"\".size·2 uintptr, @\"\".x·3 *any, @\"\".y·4 *any)\n"
	"func @\"\".int64div (? int64, ? int64) (? int64)\n"
	"func @\"\".uint64div (? uint64, ? uint64) (? uint64)\n"
	"func @\"\".int64mod (? int64, ? int64) (? int64)\n"
	"func @\"\".uint64mod (? uint64, ? uint64) (? uint64)\n"
	"func @\"\".float64toint64 (? float64) (? int64)\n"
	"func @\"\".float64touint64 (? float64) (? uint64)\n"
	"func @\"\".int64tofloat64 (? int64) (? float64)\n"
	"func @\"\".uint64tofloat64 (? uint64) (? float64)\n"
	"func @\"\".complex128div (@\"\".num·2 complex128, @\"\".den·3 complex128) (@\"\".quo·1 complex128)\n"
	"func @\"\".racefuncenter (? uintptr)\n"
	"func @\"\".racefuncexit ()\n"
	"func @\"\".raceread (? uintptr)\n"
	"func @\"\".racewrite (? uintptr)\n"
	"func @\"\".racereadrange (@\"\".addr·1 uintptr, @\"\".size·2 uintptr)\n"
	"func @\"\".racewriterange (@\"\".addr·1 uintptr, @\"\".size·2 uintptr)\n"
	"\n"
	"$$\n";
char *unsafeimport =
	"package unsafe\n"
	"import runtime \"runtime\"\n"
	"type @\"\".Pointer uintptr\n"
	"func @\"\".Offsetof (? any) (? uintptr)\n"
	"func @\"\".Sizeof (? any) (? uintptr)\n"
	"func @\"\".Alignof (? any) (? uintptr)\n"
	"\n"
	"$$\n";
