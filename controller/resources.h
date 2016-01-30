// Copyright 2009 Olivier Gillet.
//
// Author: Olivier Gillet (ol.gillet@gmail.com)
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
// -----------------------------------------------------------------------------
//
// Resources definitions.
//
// Automatically generated with:
// make resources


#ifndef CONTROLLER_RESOURCES_H_
#define CONTROLLER_RESOURCES_H_


#include "avrlib/base.h"

#include <avr/pgmspace.h>


#include "avrlib/resources_manager.h"

namespace ambika {

typedef uint16_t ResourceId;

extern const prog_char* const string_table[];

extern const prog_uint16_t* const lookup_table_table[];

extern const prog_uint8_t* const character_table[];

extern const prog_uint8_t* const waveform_table[];

extern const prog_uint16_t lut_res_lfo_increments[] PROGMEM;
extern const prog_uint16_t lut_res_scale_just[] PROGMEM;
extern const prog_uint16_t lut_res_scale_pythagorean[] PROGMEM;
extern const prog_uint16_t lut_res_scale_1_4_eb[] PROGMEM;
extern const prog_uint16_t lut_res_scale_1_4_e[] PROGMEM;
extern const prog_uint16_t lut_res_scale_1_4_ea[] PROGMEM;
extern const prog_uint16_t lut_res_scale_bhairav[] PROGMEM;
extern const prog_uint16_t lut_res_scale_gunakri[] PROGMEM;
extern const prog_uint16_t lut_res_scale_marwa[] PROGMEM;
extern const prog_uint16_t lut_res_scale_shree[] PROGMEM;
extern const prog_uint16_t lut_res_scale_purvi[] PROGMEM;
extern const prog_uint16_t lut_res_scale_bilawal[] PROGMEM;
extern const prog_uint16_t lut_res_scale_yaman[] PROGMEM;
extern const prog_uint16_t lut_res_scale_kafi[] PROGMEM;
extern const prog_uint16_t lut_res_scale_bhimpalasree[] PROGMEM;
extern const prog_uint16_t lut_res_scale_darbari[] PROGMEM;
extern const prog_uint16_t lut_res_scale_rageshree[] PROGMEM;
extern const prog_uint16_t lut_res_scale_khamaj[] PROGMEM;
extern const prog_uint16_t lut_res_scale_mimal[] PROGMEM;
extern const prog_uint16_t lut_res_scale_parameshwari[] PROGMEM;
extern const prog_uint16_t lut_res_scale_rangeshwari[] PROGMEM;
extern const prog_uint16_t lut_res_scale_gangeshwari[] PROGMEM;
extern const prog_uint16_t lut_res_scale_kameshwari[] PROGMEM;
extern const prog_uint16_t lut_res_scale_pa__kafi[] PROGMEM;
extern const prog_uint16_t lut_res_scale_natbhairav[] PROGMEM;
extern const prog_uint16_t lut_res_scale_m_kauns[] PROGMEM;
extern const prog_uint16_t lut_res_scale_bairagi[] PROGMEM;
extern const prog_uint16_t lut_res_scale_b_todi[] PROGMEM;
extern const prog_uint16_t lut_res_scale_chandradeep[] PROGMEM;
extern const prog_uint16_t lut_res_scale_kaushik_todi[] PROGMEM;
extern const prog_uint16_t lut_res_scale_jogeshwari[] PROGMEM;
extern const prog_uint16_t lut_res_arpeggiator_patterns[] PROGMEM;
extern const prog_uint16_t lut_res_groove_swing[] PROGMEM;
extern const prog_uint16_t lut_res_groove_shuffle[] PROGMEM;
extern const prog_uint16_t lut_res_groove_push[] PROGMEM;
extern const prog_uint16_t lut_res_groove_lag[] PROGMEM;
extern const prog_uint16_t lut_res_groove_human[] PROGMEM;
extern const prog_uint16_t lut_res_groove_monkey[] PROGMEM;
extern const prog_uint8_t chr_res_special_characters[] PROGMEM;
extern const prog_uint8_t wav_res_lfo_waveforms[] PROGMEM;
#define STR_RES_WAVEFORM 0  // waveform
#define STR_RES_PARAMETER 1  // parameter
#define STR_RES_RANGE 2  // range
#define STR_RES_TUNE 3  // tune
#define STR_RES_OSC_MIX 4  // osc mix
#define STR_RES_SUB_OSC_ 5  // sub osc.
#define STR_RES_CROSSMOD_ 6  // crossmod.
#define STR_RES_OPERATOR 7  // operator
#define STR_RES_AMOUNT 8  // amount
#define STR_RES_RESONANCE 9  // resonance
#define STR_RES_MODE 10  // mode
#define STR_RES_ENV2TVCF 11  // env2~vcf
#define STR_RES_LFO2TVCF 12  // lfo2~vcf
#define STR_RES_ATTACK 13  // attack
#define STR_RES_DECAY 14  // decay
#define STR_RES_SUSTAIN 15  // sustain
#define STR_RES_RELEASE 16  // release
#define STR_RES_TRIGGER 17  // trigger
#define STR_RES_RATE 18  // rate
#define STR_RES_LFO_EG 19  // lfo/eg
#define STR_RES_VOICE_LFO 20  // voice lfo
#define STR_RES_SOURCE 21  // source
#define STR_RES_DESTINATION 22  // destination
#define STR_RES_IN1 23  // in1
#define STR_RES_IN2 24  // in2
#define STR_RES_MODULATION 25  // modulation
#define STR_RES_MODUL_ 26  // modul.
#define STR_RES__MODULATION 27  // modulation
#define STR_RES_MODIFIER 28  // modifier
#define STR_RES_MODIF_ 29  // modif.
#define STR_RES_VOLUME 30  // volume
#define STR_RES_OCTAVE 31  // octave
#define STR_RES_SPREAD 32  // spread
#define STR_RES_LEGATO 33  // legato
#define STR_RES_PORTAMENTO 34  // portamento
#define STR_RES_ARP_SEQ 35  // arp/seq
#define STR_RES_RAGA 36  // raga
#define STR_RES_DIRECTION 37  // direction
#define STR_RES_PATTERN 38  // pattern
#define STR_RES_CHANNEL 39  // channel
#define STR_RES_PART 40  // part
#define STR_RES_BPM 41  // bpm
#define STR_RES_LTCH 42  // ltch
#define STR_RES_LATCH 43  // latch
#define STR_RES_LOW 44  // low
#define STR_RES_HIGH 45  // high
#define STR_RES_GRID 46  // grid
#define STR_RES_SEQ1_LEN 47  // seq1 len
#define STR_RES_SEQ2_LEN 48  // seq2 len
#define STR_RES_PATT_LEN 49  // patt len
#define STR_RES_LEN1 50  // len1
#define STR_RES_LEN2 51  // len2
#define STR_RES_LENP 52  // lenp
#define STR_RES_GROOVE 53  // groove
#define STR_RES_MIDI 54  // midi
#define STR_RES_SNAP 55  // snap
#define STR_RES_HELP 56  // help
#define STR_RES_AUTO_BACKUP 57  // auto backup
#define STR_RES_LEDS 58  // leds
#define STR_RES_CARD_LEDS 59  // card leds
#define STR_RES_SWAP_COLORS 60  // swap colors
#define STR_RES_INPT_FILTER 61  // inpt filter
#define STR_RES_OUTP_MODE 62  // outp mode
#define STR_RES_EXT 63  // ext
#define STR_RES_OMNI 64  // omni
#define STR_RES_AMNT 65  // amnt
#define STR_RES_SRCE 66  // srce
#define STR_RES_OCT 67  // oct
#define STR_RES_SPRD 68  // sprd
#define STR_RES_A_SQ 69  // a/sq
#define STR_RES_OCTV 70  // octv
#define STR_RES_OFF 71  // off
#define STR_RES_ON 72  // on
#define STR_RES_NONE 73  // none
#define STR_RES_SAW 74  // saw
#define STR_RES_SQUARE 75  // square
#define STR_RES_TRIANGLE 76  // triangle
#define STR_RES_SINE 77  // sine
#define STR_RES_ZSAW 78  // zsaw
#define STR_RES_LPZSAW 79  // lpzsaw
#define STR_RES_PKZSAW 80  // pkzsaw
#define STR_RES_BPZSAW 81  // bpzsaw
#define STR_RES_HPZSAW 82  // hpzsaw
#define STR_RES_LPZPULSE 83  // lpzpulse
#define STR_RES_PKZPULSE 84  // pkzpulse
#define STR_RES_BPZPULSE 85  // bpzpulse
#define STR_RES_HPZPULSE 86  // hpzpulse
#define STR_RES_ZTRIANGLE 87  // ztriangle
#define STR_RES_PAD 88  // pad
#define STR_RES_FM 89  // fm
#define STR_RES_8BITS 90  // 8bits
#define STR_RES_PWM 91  // pwm
#define STR_RES_NOISE 92  // noise
#define STR_RES_VOWEL 93  // vowel
#define STR_RES_OLDSAW 94  // oldsaw
#define STR_RES_QPWM 95  // qpwm
#define STR_RES_FMFB 96  // fmfb
#define STR_RES_MALE 97  // male
#define STR_RES_FEMALE 98  // female
#define STR_RES_CHOIR 99  // choir
#define STR_RES_TAMPURA 100  // tampura
#define STR_RES_BOWED 101  // bowed
#define STR_RES_CELLO 102  // cello
#define STR_RES_VIBES 103  // vibes
#define STR_RES_SLAP 104  // slap
#define STR_RES_EPIANO 105  // epiano
#define STR_RES_ORGAN 106  // organ
#define STR_RES_WAVES 107  // waves
#define STR_RES_DIGITAL 108  // digital
#define STR_RES_DRONE_1 109  // drone 1
#define STR_RES_DRONE_2 110  // drone 2
#define STR_RES_METALLIC 111  // metallic
#define STR_RES_BELL 112  // bell
#define STR_RES_WAVQUENCE 113  // wavquence
#define STR_RES_TRI 114  // tri
#define STR_RES_SQR 115  // sqr
#define STR_RES_S_H 116  // s&h
#define STR_RES_RAMP 117  // ramp
#define STR_RES__SINE 118  // sine
#define STR_RES_HRM2 119  // hrm2
#define STR_RES_HRM3 120  // hrm3
#define STR_RES_HRM5 121  // hrm5
#define STR_RES_GRG1 122  // grg1
#define STR_RES_GRG2 123  // grg2
#define STR_RES_BAT1 124  // bat1
#define STR_RES_BAT2 125  // bat2
#define STR_RES_SPK1 126  // spk1
#define STR_RES_SPK2 127  // spk2
#define STR_RES_LSAW 128  // lsaw
#define STR_RES_LSQR 129  // lsqr
#define STR_RES_RSAW 130  // rsaw
#define STR_RES_RSQR 131  // rsqr
#define STR_RES_STP1 132  // stp1
#define STR_RES_STP2 133  // stp2
#define STR_RES___OFF 134  // off
#define STR_RES_SYNC 135  // sync
#define STR_RES_RINGMOD 136  // ringmod
#define STR_RES_XOR 137  // xor
#define STR_RES_FOLD 138  // fold
#define STR_RES_BITS 139  // bits
#define STR_RES_SQU1 140  // squ1
#define STR_RES_TRI1 141  // tri1
#define STR_RES_PUL1 142  // pul1
#define STR_RES_SQU2 143  // squ2
#define STR_RES_TRI2 144  // tri2
#define STR_RES_PUL2 145  // pul2
#define STR_RES_CLICK 146  // click
#define STR_RES_GLITCH 147  // glitch
#define STR_RES_BLOW 148  // blow
#define STR_RES_METAL 149  // metal
#define STR_RES_POP 150  // pop
#define STR_RES_ENV1 151  // env1
#define STR_RES_ENV2 152  // env2
#define STR_RES_ENV3 153  // env3
#define STR_RES_LFO1 154  // lfo1
#define STR_RES_LFO2 155  // lfo2
#define STR_RES_LFO3 156  // lfo3
#define STR_RES_LFO4 157  // lfo4
#define STR_RES_MOD1 158  // mod1
#define STR_RES_MOD2 159  // mod2
#define STR_RES_MOD3 160  // mod3
#define STR_RES_MOD4 161  // mod4
#define STR_RES_SEQ1 162  // seq1
#define STR_RES_SEQ2 163  // seq2
#define STR_RES_ARP 164  // arp
#define STR_RES_VELO 165  // velo
#define STR_RES_AFTR 166  // aftr
#define STR_RES_BEND 167  // bend
#define STR_RES_MWHL 168  // mwhl
#define STR_RES_WHL2 169  // whl2
#define STR_RES_PDAL 170  // pdal
#define STR_RES_NOTE 171  // note
#define STR_RES_GATE 172  // gate
#define STR_RES_NOIS 173  // nois
#define STR_RES_RAND 174  // rand
#define STR_RES_E256 175  // =256
#define STR_RES_E128 176  // =128
#define STR_RES_E64 177  // =64
#define STR_RES_E32 178  // =32
#define STR_RES_E16 179  // =16
#define STR_RES_E8 180  // =8
#define STR_RES_E4 181  // =4
#define STR_RES_PRM1 182  // prm1
#define STR_RES_PRM2 183  // prm2
#define STR_RES_OSC1 184  // osc1
#define STR_RES_OSC2 185  // osc2
#define STR_RES_31S2 186  // 1+2
#define STR_RES_VIBR 187  // vibr
#define STR_RES_MIX 188  // mix
#define STR_RES_XMOD 189  // xmod
#define STR_RES__NOIS 190  // nois
#define STR_RES_SUB 191  // sub
#define STR_RES_FUZZ 192  // fuzz
#define STR_RES_CRSH 193  // crsh
#define STR_RES_FREQ 194  // freq
#define STR_RES_RESO 195  // reso
#define STR_RES_ATTK 196  // attk
#define STR_RES_DECA 197  // deca
#define STR_RES_RELE 198  // rele
#define STR_RES__LFO4 199  // lfo4
#define STR_RES_VCA 200  // vca
#define STR_RES_ENV_1 201  // env 1
#define STR_RES_ENV_2 202  // env 2
#define STR_RES_ENV_3 203  // env 3
#define STR_RES_LFO_1 204  // lfo 1
#define STR_RES_LFO_2 205  // lfo 2
#define STR_RES_LFO_3 206  // lfo 3
#define STR_RES_LFO_4 207  // lfo 4
#define STR_RES_MOD__1 208  // mod. 1
#define STR_RES_MOD__2 209  // mod. 2
#define STR_RES_MOD__3 210  // mod. 3
#define STR_RES_MOD__4 211  // mod. 4
#define STR_RES_SEQ__1 212  // seq. 1
#define STR_RES_SEQ__2 213  // seq. 2
#define STR_RES__ARP 214  // arp
#define STR_RES__VELO 215  // velo
#define STR_RES_AFTTCH 216  // afttch
#define STR_RES_BENDER 217  // bender
#define STR_RES_MWHEEL 218  // mwheel
#define STR_RES_WHEEL2 219  // wheel2
#define STR_RES_PEDAL 220  // pedal
#define STR_RES__NOTE 221  // note
#define STR_RES__GATE 222  // gate
#define STR_RES__NOISE 223  // noise
#define STR_RES_RANDOM 224  // random
#define STR_RES_E_256 225  // = 256
#define STR_RES_E_32 226  // = 32
#define STR_RES_E_16 227  // = 16
#define STR_RES_E_8 228  // = 8
#define STR_RES_E_4 229  // = 4
#define STR_RES_PARAM_1 230  // param 1
#define STR_RES_PARAM_2 231  // param 2
#define STR_RES_OSC_1 232  // osc 1
#define STR_RES_OSC_2 233  // osc 2
#define STR_RES_OSC_1S2 234  // osc 1+2
#define STR_RES_VIBRATO 235  // vibrato
#define STR_RES__MIX 236  // mix
#define STR_RES__XMOD 237  // xmod
#define STR_RES___NOISE 238  // noise
#define STR_RES_SUBOSC 239  // subosc
#define STR_RES__FUZZ 240  // fuzz
#define STR_RES_CRUSH 241  // crush
#define STR_RES_FREQUENCY 242  // frequency
#define STR_RES__RESO 243  // reso
#define STR_RES__ATTACK 244  // attack
#define STR_RES__DECAY 245  // decay
#define STR_RES__RELEASE 246  // release
#define STR_RES__LFO_4 247  // lfo 4
#define STR_RES__VCA 248  // vca
#define STR_RES_LP 249  // lp
#define STR_RES_BP 250  // bp
#define STR_RES_HP 251  // hp
#define STR_RES_FREE 252  // free
#define STR_RES_ENVTLFO 253  // env~lfo
#define STR_RES_LFOTENV 254  // lfo~env
#define STR_RES_STEP_SEQ 255  // step seq
#define STR_RES_ARPEGGIO 256  // arpeggio
#define STR_RES__PATTERN 257  // pattern
#define STR_RES__OFF 258  // off
#define STR_RES_ADD 259  // add
#define STR_RES_PROD 260  // prod
#define STR_RES_ATTN 261  // attn
#define STR_RES_MAX 262  // max
#define STR_RES_MIN 263  // min
#define STR_RES__XOR 264  // xor
#define STR_RES_GE 265  // >=
#define STR_RES_LE 266  // <=
#define STR_RES_QTZ 267  // qtz
#define STR_RES_LAG 268  // lag
#define STR_RES_MONO 269  // mono
#define STR_RES_POLY 270  // poly
#define STR_RES_2X_UNISON 271  // 2x unison
#define STR_RES_CYCLIC 272  // cyclic
#define STR_RES_CHAIN 273  // chain
#define STR_RES_UP 274  // up
#define STR_RES_DOWN 275  // down
#define STR_RES_UP_DOWN 276  // up&down
#define STR_RES_PLAYED 277  // played
#define STR_RES__RANDOM 278  // random
#define STR_RES_CHORD 279  // chord
#define STR_RES_1_1 280  // 1/1
#define STR_RES_3_4 281  // 3/4
#define STR_RES_2_3 282  // 2/3
#define STR_RES_1_2 283  // 1/2
#define STR_RES_3_8 284  // 3/8
#define STR_RES_1_3 285  // 1/3
#define STR_RES_1_4 286  // 1/4
#define STR_RES_1_6 287  // 1/6
#define STR_RES_1_8 288  // 1/8
#define STR_RES_1_12 289  // 1/12
#define STR_RES_1_16 290  // 1/16
#define STR_RES_1_24 291  // 1/24
#define STR_RES_1_32 292  // 1/32
#define STR_RES_1_48 293  // 1/48
#define STR_RES_1_96 294  // 1/96
#define STR_RES_THRU 295  // thru
#define STR_RES_SEQUENCER 296  // sequencer
#define STR_RES_CONTROLLR 297  // controllr
#define STR_RES__CHAIN 298  // chain
#define STR_RES_FULL 299  // full
#define STR_RES_____ 300  // ....
#define STR_RES____S 301  // ...s
#define STR_RES___P_ 302  // ..p.
#define STR_RES___PS 303  // ..ps
#define STR_RES__N__ 304  // .n..
#define STR_RES__N_S 305  // .n.s
#define STR_RES__NP_ 306  // .np.
#define STR_RES__NPS 307  // .nps
#define STR_RES_C___ 308  // c...
#define STR_RES_C__S 309  // c..s
#define STR_RES_C_P_ 310  // c.p.
#define STR_RES_C_PS 311  // c.ps
#define STR_RES_CN__ 312  // cn..
#define STR_RES_CN_S 313  // cn.s
#define STR_RES_CNP_ 314  // cnp.
#define STR_RES_CNPS 315  // cnps
#define STR_RES_SWING 316  // swing
#define STR_RES_SHUFFLE 317  // shuffle
#define STR_RES_PUSH 318  // push
#define STR_RES__LAG 319  // lag
#define STR_RES_HUMAN 320  // human
#define STR_RES_MONKEY 321  // monkey
#define STR_RES_OSCILLATOR_1 322  // oscillator 1
#define STR_RES_OSCILLATOR_2 323  // oscillator 2
#define STR_RES_MIXER 324  // mixer
#define STR_RES_LFO 325  // lfo
#define STR_RES_FILTER_1 326  // filter 1
#define STR_RES_FILTER_2 327  // filter 2
#define STR_RES_ENVELOPE 328  // envelope
#define STR_RES_ARPEGGIATOR 329  // arpeggiator
#define STR_RES_MULTI 330  // multi
#define STR_RES_CLOCK 331  // clock
#define STR_RES_PERFORMANCE 332  // performance
#define STR_RES_SYSTEM 333  // system
#define STR_RES_PT_X_PATCH 334  // pt X patch
#define STR_RES_PT_X_SEQUENCE 335  // pt X sequence
#define STR_RES_PT_X_PROGRAM 336  // pt X program
#define STR_RES_RANDOMIZE 337  // randomize
#define STR_RES_INIT 338  // init
#define STR_RES_PATCH 339  // PATCH
#define STR_RES_SEQUENCE 340  // SEQUENCE
#define STR_RES_PROGRAM 341  // PROGRAM
#define STR_RES__MULTI 342  // MULTI
#define STR_RES____ 343  // ___
#define STR_RES_EQUAL 344  // equal
#define STR_RES_JUST 345  // just
#define STR_RES_PYTHAGOREAN 346  // pythagorean
#define STR_RES_1_4_EB 347  // 1/4 eb
#define STR_RES_1_4_E 348  // 1/4 e
#define STR_RES_1_4_EA 349  // 1/4 ea
#define STR_RES_BHAIRAV 350  // bhairav
#define STR_RES_GUNAKRI 351  // gunakri
#define STR_RES_MARWA 352  // marwa
#define STR_RES_SHREE 353  // shree
#define STR_RES_PURVI 354  // purvi
#define STR_RES_BILAWAL 355  // bilawal
#define STR_RES_YAMAN 356  // yaman
#define STR_RES_KAFI 357  // kafi
#define STR_RES_BHIMPALASREE 358  // bhimpalasree
#define STR_RES_DARBARI 359  // darbari
#define STR_RES_BAGESHREE 360  // bageshree
#define STR_RES_RAGESHREE 361  // rageshree
#define STR_RES_KHAMAJ 362  // khamaj
#define STR_RES_MIMAL 363  // mi'mal
#define STR_RES_PARAMESHWARI 364  // parameshwari
#define STR_RES_RANGESHWARI 365  // rangeshwari
#define STR_RES_GANGESHWARI 366  // gangeshwari
#define STR_RES_KAMESHWARI 367  // kameshwari
#define STR_RES_PA__KAFI 368  // pa. kafi
#define STR_RES_NATBHAIRAV 369  // natbhairav
#define STR_RES_M_KAUNS 370  // m.kauns
#define STR_RES_BAIRAGI 371  // bairagi
#define STR_RES_B_TODI 372  // b.todi
#define STR_RES_CHANDRADEEP 373  // chandradeep
#define STR_RES_KAUSHIK_TODI 374  // kaushik todi
#define STR_RES_JOGESHWARI 375  // jogeshwari
#define STR_RES_RASIA 376  // rasia
#define LUT_RES_LFO_INCREMENTS 0
#define LUT_RES_LFO_INCREMENTS_SIZE 128
#define LUT_RES_SCALE_JUST 1
#define LUT_RES_SCALE_JUST_SIZE 12
#define LUT_RES_SCALE_PYTHAGOREAN 2
#define LUT_RES_SCALE_PYTHAGOREAN_SIZE 12
#define LUT_RES_SCALE_1_4_EB 3
#define LUT_RES_SCALE_1_4_EB_SIZE 12
#define LUT_RES_SCALE_1_4_E 4
#define LUT_RES_SCALE_1_4_E_SIZE 12
#define LUT_RES_SCALE_1_4_EA 5
#define LUT_RES_SCALE_1_4_EA_SIZE 12
#define LUT_RES_SCALE_BHAIRAV 6
#define LUT_RES_SCALE_BHAIRAV_SIZE 12
#define LUT_RES_SCALE_GUNAKRI 7
#define LUT_RES_SCALE_GUNAKRI_SIZE 12
#define LUT_RES_SCALE_MARWA 8
#define LUT_RES_SCALE_MARWA_SIZE 12
#define LUT_RES_SCALE_SHREE 9
#define LUT_RES_SCALE_SHREE_SIZE 12
#define LUT_RES_SCALE_PURVI 10
#define LUT_RES_SCALE_PURVI_SIZE 12
#define LUT_RES_SCALE_BILAWAL 11
#define LUT_RES_SCALE_BILAWAL_SIZE 12
#define LUT_RES_SCALE_YAMAN 12
#define LUT_RES_SCALE_YAMAN_SIZE 12
#define LUT_RES_SCALE_KAFI 13
#define LUT_RES_SCALE_KAFI_SIZE 12
#define LUT_RES_SCALE_BHIMPALASREE 14
#define LUT_RES_SCALE_BHIMPALASREE_SIZE 12
#define LUT_RES_SCALE_DARBARI 15
#define LUT_RES_SCALE_DARBARI_SIZE 12
#define LUT_RES_SCALE_BAGESHREE 16
#define LUT_RES_SCALE_BAGESHREE_SIZE 12
#define LUT_RES_SCALE_RAGESHREE 17
#define LUT_RES_SCALE_RAGESHREE_SIZE 12
#define LUT_RES_SCALE_KHAMAJ 18
#define LUT_RES_SCALE_KHAMAJ_SIZE 12
#define LUT_RES_SCALE_MIMAL 19
#define LUT_RES_SCALE_MIMAL_SIZE 12
#define LUT_RES_SCALE_PARAMESHWARI 20
#define LUT_RES_SCALE_PARAMESHWARI_SIZE 12
#define LUT_RES_SCALE_RANGESHWARI 21
#define LUT_RES_SCALE_RANGESHWARI_SIZE 12
#define LUT_RES_SCALE_GANGESHWARI 22
#define LUT_RES_SCALE_GANGESHWARI_SIZE 12
#define LUT_RES_SCALE_KAMESHWARI 23
#define LUT_RES_SCALE_KAMESHWARI_SIZE 12
#define LUT_RES_SCALE_PA__KAFI 24
#define LUT_RES_SCALE_PA__KAFI_SIZE 12
#define LUT_RES_SCALE_NATBHAIRAV 25
#define LUT_RES_SCALE_NATBHAIRAV_SIZE 12
#define LUT_RES_SCALE_M_KAUNS 26
#define LUT_RES_SCALE_M_KAUNS_SIZE 12
#define LUT_RES_SCALE_BAIRAGI 27
#define LUT_RES_SCALE_BAIRAGI_SIZE 12
#define LUT_RES_SCALE_B_TODI 28
#define LUT_RES_SCALE_B_TODI_SIZE 12
#define LUT_RES_SCALE_CHANDRADEEP 29
#define LUT_RES_SCALE_CHANDRADEEP_SIZE 12
#define LUT_RES_SCALE_KAUSHIK_TODI 30
#define LUT_RES_SCALE_KAUSHIK_TODI_SIZE 12
#define LUT_RES_SCALE_JOGESHWARI 31
#define LUT_RES_SCALE_JOGESHWARI_SIZE 12
#define LUT_RES_SCALE_RASIA 32
#define LUT_RES_SCALE_RASIA_SIZE 12
#define LUT_RES_ARPEGGIATOR_PATTERNS 33
#define LUT_RES_ARPEGGIATOR_PATTERNS_SIZE 22
#define LUT_RES_GROOVE_SWING 34
#define LUT_RES_GROOVE_SWING_SIZE 16
#define LUT_RES_GROOVE_SHUFFLE 35
#define LUT_RES_GROOVE_SHUFFLE_SIZE 16
#define LUT_RES_GROOVE_PUSH 36
#define LUT_RES_GROOVE_PUSH_SIZE 16
#define LUT_RES_GROOVE_LAG 37
#define LUT_RES_GROOVE_LAG_SIZE 16
#define LUT_RES_GROOVE_HUMAN 38
#define LUT_RES_GROOVE_HUMAN_SIZE 16
#define LUT_RES_GROOVE_MONKEY 39
#define LUT_RES_GROOVE_MONKEY_SIZE 16
#define CHR_RES_SPECIAL_CHARACTERS 0
#define CHR_RES_SPECIAL_CHARACTERS_SIZE 56
#define WAV_RES_LFO_WAVEFORMS 0
#define WAV_RES_LFO_WAVEFORMS_SIZE 4112
typedef avrlib::ResourcesManager<
    ResourceId,
    avrlib::ResourcesTables<
        string_table,
        lookup_table_table> > ResourcesManager; 

}  // namespace ambika

#endif  // CONTROLLER_RESOURCES_H_
