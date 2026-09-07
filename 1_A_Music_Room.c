/* Beep() range: 37 Hz – 32,767 Hz
 * Notes below 37 Hz are silent.
 * Upper limit: D#10 / Eb10 at 19,912 Hz. */


/* ── Octave 0 ── (silent — all below 37 Hz) ──────────────────────── */
#define C0   16
#define Cs0  17   /* C# */
#define Db0  17   /* Db */
#define D0   18
#define Ds0  19   /* D# */
#define Eb0  19   /* Eb */
#define E0   21
#define F0   22
#define Fs0  23   /* F# */
#define Gb0  23   /* Gb */
#define G0   25
#define Gs0  26   /* G# */
#define Ab0  26   /* Ab */
#define A0   28
#define As0  29   /* A# */
#define Bb0  29   /* Bb */
#define B0   31

/* ── Octave 1 ── (C1–Cs1 silent; D1 and above audible) ───────────── */
#define C1   33
#define Cs1  35   /* C# — silent */
#define Db1  35   /* Db — silent */
#define D1   37   /* first audible note */
#define Ds1  39   /* D# */
#define Eb1  39   /* Eb */
#define E1   41
#define F1   44
#define Fs1  46   /* F# */
#define Gb1  46   /* Gb */
#define G1   49
#define Gs1  52   /* G# */
#define Ab1  52   /* Ab */
#define A1   55
#define As1  58   /* A# */
#define Bb1  58   /* Bb */
#define B1   62

/* ── Octave 2 ─────────────────────────────────────────────────────── */
#define C2   65
#define Cs2  69   /* C# */
#define Db2  69   /* Db */
#define D2   73
#define Ds2  78   /* D# */
#define Eb2  78   /* Eb */
#define E2   82
#define F2   87
#define Fs2  93   /* F# */
#define Gb2  93   /* Gb */
#define G2   98
#define Gs2  104  /* G# */
#define Ab2  104  /* Ab */
#define A2   110
#define As2  117  /* A# */
#define Bb2  117  /* Bb */
#define B2   123

/* ── Octave 3 ─────────────────────────────────────────────────────── */
#define C3   131
#define Cs3  139  /* C# */
#define Db3  139  /* Db */
#define D3   147
#define Ds3  156  /* D# */
#define Eb3  156  /* Eb */
#define E3   165
#define F3   175
#define Fs3  185  /* F# */
#define Gb3  185  /* Gb */
#define G3   196
#define Gs3  208  /* G# */
#define Ab3  208  /* Ab */
#define A3   220
#define As3  233  /* A# */
#define Bb3  233  /* Bb */
#define B3   247

/* ── Octave 4 ─────────────────────────────────────────────────────── */
#define C4   262
#define Cs4  277  /* C# */
#define Db4  277  /* Db */
#define D4   294
#define Ds4  311  /* D# */
#define Eb4  311  /* Eb */
#define E4   330
#define F4   349
#define Fs4  370  /* F# */
#define Gb4  370  /* Gb */
#define G4   392
#define Gs4  415  /* G# */
#define Ab4  415  /* Ab */
#define A4   440  /* concert pitch */
#define As4  466  /* A# */
#define Bb4  466  /* Bb */
#define B4   494

/* ── Octave 5 ─────────────────────────────────────────────────────── */
#define C5   523
#define Cs5  554  /* C# */
#define Db5  554  /* Db */
#define D5   587
#define Ds5  622  /* D# */
#define Eb5  622  /* Eb */
#define E5   659
#define F5   698
#define Fs5  740  /* F# */
#define Gb5  740  /* Gb */
#define G5   784
#define Gs5  831  /* G# */
#define Ab5  831  /* Ab */
#define A5   880
#define As5  932  /* A# */
#define Bb5  932  /* Bb */
#define B5   988

/* ── Octave 6 ─────────────────────────────────────────────────────── */
#define C6   1047
#define Cs6  1109 /* C# */
#define Db6  1109 /* Db */
#define D6   1175
#define Ds6  1245 /* D# */
#define Eb6  1245 /* Eb */
#define E6   1319
#define F6   1397
#define Fs6  1480 /* F# */
#define Gb6  1480 /* Gb */
#define G6   1568
#define Gs6  1661 /* G# */
#define Ab6  1661 /* Ab */
#define A6   1760
#define As6  1865 /* A# */
#define Bb6  1865 /* Bb */
#define B6   1976

/* ── Octave 7 ─────────────────────────────────────────────────────── */
#define C7   2093
#define Cs7  2217 /* C# */
#define Db7  2217 /* Db */
#define D7   2349
#define Ds7  2489 /* D# */
#define Eb7  2489 /* Eb */
#define E7   2637
#define F7   2794
#define Fs7  2960 /* F# */
#define Gb7  2960 /* Gb */
#define G7   3136
#define Gs7  3322 /* G# */
#define Ab7  3322 /* Ab */
#define A7   3520
#define As7  3729 /* A# */
#define Bb7  3729 /* Bb */
#define B7   3951

/* ── Octave 8 ─────────────────────────────────────────────────────── */
#define C8   4186
#define Cs8  4435 /* C# */
#define Db8  4435 /* Db */
#define D8   4699
#define Ds8  4978 /* D# */
#define Eb8  4978 /* Eb */
#define E8   5274
#define F8   5588
#define Fs8  5920 /* F# */
#define Gb8  5920 /* Gb */
#define G8   6272
#define Gs8  6645 /* G# */
#define Ab8  6645 /* Ab */
#define A8   7040
#define As8  7459 /* A# */
#define Bb8  7459 /* Bb */
#define B8   7902

/* ── Octave 9 ─────────────────────────────────────────────────────── */
#define C9   8372
#define Cs9  8870 /* C# */
#define Db9  8870 /* Db */
#define D9   9397
#define Ds9  9956 /* D# */
#define Eb9  9956 /* Eb */
#define E9   10548
#define F9   11175
#define Fs9  11840 /* F# */
#define Gb9  11840 /* Gb */
#define G9   12544
#define Gs9  13290 /* G# */
#define Ab9  13290 /* Ab */
#define A9   14080
#define As9  14917 /* A# */
#define Bb9  14917 /* Bb */
#define B9   15804

/* ── Octave 10 ── (upper limit: Ds10 / Eb10 at 19,912 Hz) ────────── */
#define C10  16744
#define Cs10 17740 /* C# */
#define Db10 17740 /* Db */
#define D10  18795
#define Ds10 19912 /* D# */
#define Eb10 19912 /* Eb */