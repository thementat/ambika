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
#define STR_RES_VELOTVCF 13  // velo~vcf
#define STR_RES_KEYBTVCF 14  // keyb~vcf
#define STR_RES_ATTACK 15  // attack
#define STR_RES_DECAY 16  // decay
#define STR_RES_SUSTAIN 17  // sustain
#define STR_RES_RELEASE 18  // release
#define STR_RES_TRIGGER 19  // trigger
#define STR_RES_RATE 20  // rate
#define STR_RES_LFO_EG 21  // lfo/eg
#define STR_RES_VOICE_LFO 22  // voice lfo
#define STR_RES_SOURCE 23  // source
#define STR_RES_DESTINATION 24  // destination
#define STR_RES_IN1 25  // in1
#define STR_RES_IN2 26  // in2
#define STR_RES_MODULATION 27  // modulation
#define STR_RES_MODUL_ 28  // modul.
#define STR_RES__MODULATION 29  // modulation
#define STR_RES_MODIFIER 30  // modifier
#define STR_RES_MODIF_ 31  // modif.
#define STR_RES_VOLUME 32  // volume
#define STR_RES_OCTAVE 33  // octave
#define STR_RES_SPREAD 34  // spread
#define STR_RES_LEGATO 35  // legato
#define STR_RES_PORTAMENTO 36  // portamento
#define STR_RES_ARP_SEQ 37  // arp/seq
#define STR_RES_RAGA 38  // raga
#define STR_RES_DIRECTION 39  // direction
#define STR_RES_PATTERN 40  // pattern
#define STR_RES_CHANNEL 41  // channel
#define STR_RES_PART 42  // part
#define STR_RES_BPM 43  // bpm
#define STR_RES_LTCH 44  // ltch
#define STR_RES_LATCH 45  // latch
#define STR_RES_LOW 46  // low
#define STR_RES_HIGH 47  // high
#define STR_RES_GRID 48  // grid
#define STR_RES_SEQ1_LEN 49  // seq1 len
#define STR_RES_SEQ2_LEN 50  // seq2 len
#define STR_RES_PATT_LEN 51  // patt len
#define STR_RES_LEN1 52  // len1
#define STR_RES_LEN2 53  // len2
#define STR_RES_LENP 54  // lenp
#define STR_RES_GROOVE 55  // groove
#define STR_RES_MIDI 56  // midi
#define STR_RES_SNAP 57  // snap
#define STR_RES_HELP 58  // help
#define STR_RES_AUTO_BACKUP 59  // auto backup
#define STR_RES_LEDS 60  // leds
#define STR_RES_CARD_LEDS 61  // card leds
#define STR_RES_SWAP_COLORS 62  // swap colors
#define STR_RES_INPT_FILTER 63  // inpt filter
#define STR_RES_OUTP_MODE 64  // outp mode
#define STR_RES_EXT 65  // ext
#define STR_RES_OMNI 66  // omni
#define STR_RES_AMNT 67  // amnt
#define STR_RES_SRCE 68  // srce
#define STR_RES_OCT 69  // oct
#define STR_RES_SPRD 70  // sprd
#define STR_RES_A_SQ 71  // a/sq
#define STR_RES_OCTV 72  // octv
#define STR_RES_OFF 73  // off
#define STR_RES_ON 74  // on
#define STR_RES_NONE 75  // none
#define STR_RES_SAW 76  // saw
#define STR_RES_SQUARE 77  // square
#define STR_RES_TRIANGLE 78  // triangle
#define STR_RES_SINE 79  // sine
#define STR_RES_ZSAW 80  // zsaw
#define STR_RES_LPZSAW 81  // lpzsaw
#define STR_RES_PKZSAW 82  // pkzsaw
#define STR_RES_BPZSAW 83  // bpzsaw
#define STR_RES_HPZSAW 84  // hpzsaw
#define STR_RES_LPZPULSE 85  // lpzpulse
#define STR_RES_PKZPULSE 86  // pkzpulse
#define STR_RES_BPZPULSE 87  // bpzpulse
#define STR_RES_HPZPULSE 88  // hpzpulse
#define STR_RES_ZTRIANGLE 89  // ztriangle
#define STR_RES_PAD 90  // pad
#define STR_RES_FM 91  // fm
#define STR_RES_8BITS 92  // 8bits
#define STR_RES_PWM 93  // pwm
#define STR_RES_NOISE 94  // noise
#define STR_RES_VOWEL 95  // vowel
#define STR_RES_MALE 96  // male
#define STR_RES_FEMALE 97  // female
#define STR_RES_CHOIR 98  // choir
#define STR_RES_TAMPURA 99  // tampura
#define STR_RES_BOWED 100  // bowed
#define STR_RES_CELLO 101  // cello
#define STR_RES_VIBES 102  // vibes
#define STR_RES_SLAP 103  // slap
#define STR_RES_EPIANO 104  // epiano
#define STR_RES_ORGAN 105  // organ
#define STR_RES_WAVES 106  // waves
#define STR_RES_DIGITAL 107  // digital
#define STR_RES_DRONE_1 108  // drone 1
#define STR_RES_DRONE_2 109  // drone 2
#define STR_RES_METALLIC 110  // metallic
#define STR_RES_BELL 111  // bell
#define STR_RES_WAVQUENCE 112  // wavquence
#define STR_RES_OLDSAW 113  // oldsaw
#define STR_RES_QPWM 114  // qpwm
#define STR_RES_FMFB 115  // fmfb
#define STR_RES_CSAW 116  // csaw
#define STR_RES_TRI 117  // tri
#define STR_RES_SQR 118  // sqr
#define STR_RES_S_H 119  // s&h
#define STR_RES_RAMP 120  // ramp
#define STR_RES__SINE 121  // sine
#define STR_RES_HRM2 122  // hrm2
#define STR_RES_HRM3 123  // hrm3
#define STR_RES_HRM5 124  // hrm5
#define STR_RES_GRG1 125  // grg1
#define STR_RES_GRG2 126  // grg2
#define STR_RES_BAT1 127  // bat1
#define STR_RES_BAT2 128  // bat2
#define STR_RES_SPK1 129  // spk1
#define STR_RES_SPK2 130  // spk2
#define STR_RES_LSAW 131  // lsaw
#define STR_RES_LSQR 132  // lsqr
#define STR_RES_RSAW 133  // rsaw
#define STR_RES_RSQR 134  // rsqr
#define STR_RES_STP1 135  // stp1
#define STR_RES_STP2 136  // stp2
#define STR_RES___OFF 137  // off
#define STR_RES_SYNC 138  // sync
#define STR_RES_RINGMOD 139  // ringmod
#define STR_RES_XOR 140  // xor
#define STR_RES_FOLD 141  // fold
#define STR_RES_BITS 142  // bits
#define STR_RES_SQU1 143  // squ1
#define STR_RES_TRI1 144  // tri1
#define STR_RES_PUL1 145  // pul1
#define STR_RES_SQU2 146  // squ2
#define STR_RES_TRI2 147  // tri2
#define STR_RES_PUL2 148  // pul2
#define STR_RES_CLICK 149  // click
#define STR_RES_GLITCH 150  // glitch
#define STR_RES_BLOW 151  // blow
#define STR_RES_METAL 152  // metal
#define STR_RES_POP 153  // pop
#define STR_RES_ENV1 154  // env1
#define STR_RES_ENV2 155  // env2
#define STR_RES_ENV3 156  // env3
#define STR_RES_LFO1 157  // lfo1
#define STR_RES_LFO2 158  // lfo2
#define STR_RES_LFO3 159  // lfo3
#define STR_RES_LFO4 160  // lfo4
#define STR_RES_MOD1 161  // mod1
#define STR_RES_MOD2 162  // mod2
#define STR_RES_MOD3 163  // mod3
#define STR_RES_MOD4 164  // mod4
#define STR_RES_SEQ1 165  // seq1
#define STR_RES_SEQ2 166  // seq2
#define STR_RES_ARP 167  // arp
#define STR_RES_VELO 168  // velo
#define STR_RES_AFTR 169  // aftr
#define STR_RES_BEND 170  // bend
#define STR_RES_MWHL 171  // mwhl
#define STR_RES_WHL2 172  // whl2
#define STR_RES_PDAL 173  // pdal
#define STR_RES_NOTE 174  // note
#define STR_RES_GATE 175  // gate
#define STR_RES_NOIS 176  // nois
#define STR_RES_RAND 177  // rand
#define STR_RES_E256 178  // =256
#define STR_RES_E128 179  // =128
#define STR_RES_E64 180  // =64
#define STR_RES_E32 181  // =32
#define STR_RES_E16 182  // =16
#define STR_RES_E8 183  // =8
#define STR_RES_E4 184  // =4
#define STR_RES_PRM1 185  // prm1
#define STR_RES_PRM2 186  // prm2
#define STR_RES_OSC1 187  // osc1
#define STR_RES_OSC2 188  // osc2
#define STR_RES_31S2 189  // 1+2
#define STR_RES_VIBR 190  // vibr
#define STR_RES_MIX 191  // mix
#define STR_RES_XMOD 192  // xmod
#define STR_RES__NOIS 193  // nois
#define STR_RES_SUB 194  // sub
#define STR_RES_FUZZ 195  // fuzz
#define STR_RES_CRSH 196  // crsh
#define STR_RES_FREQ 197  // freq
#define STR_RES_RESO 198  // reso
#define STR_RES_ATTK 199  // attk
#define STR_RES_DECA 200  // deca
#define STR_RES_RELE 201  // rele
#define STR_RES__LFO4 202  // lfo4
#define STR_RES_VCA 203  // vca
#define STR_RES_ENV_1 204  // env 1
#define STR_RES_ENV_2 205  // env 2
#define STR_RES_ENV_3 206  // env 3
#define STR_RES_LFO_1 207  // lfo 1
#define STR_RES_LFO_2 208  // lfo 2
#define STR_RES_LFO_3 209  // lfo 3
#define STR_RES_LFO_4 210  // lfo 4
#define STR_RES_MOD__1 211  // mod. 1
#define STR_RES_MOD__2 212  // mod. 2
#define STR_RES_MOD__3 213  // mod. 3
#define STR_RES_MOD__4 214  // mod. 4
#define STR_RES_SEQ__1 215  // seq. 1
#define STR_RES_SEQ__2 216  // seq. 2
#define STR_RES__ARP 217  // arp
#define STR_RES__VELO 218  // velo
#define STR_RES_AFTTCH 219  // afttch
#define STR_RES_BENDER 220  // bender
#define STR_RES_MWHEEL 221  // mwheel
#define STR_RES_WHEEL2 222  // wheel2
#define STR_RES_PEDAL 223  // pedal
#define STR_RES__NOTE 224  // note
#define STR_RES__GATE 225  // gate
#define STR_RES__NOISE 226  // noise
#define STR_RES_RANDOM 227  // random
#define STR_RES_E_256 228  // = 256
#define STR_RES_E_32 229  // = 32
#define STR_RES_E_16 230  // = 16
#define STR_RES_E_8 231  // = 8
#define STR_RES_E_4 232  // = 4
#define STR_RES_PARAM_1 233  // param 1
#define STR_RES_PARAM_2 234  // param 2
#define STR_RES_OSC_1 235  // osc 1
#define STR_RES_OSC_2 236  // osc 2
#define STR_RES_OSC_1S2 237  // osc 1+2
#define STR_RES_VIBRATO 238  // vibrato
#define STR_RES__MIX 239  // mix
#define STR_RES__XMOD 240  // xmod
#define STR_RES___NOISE 241  // noise
#define STR_RES_SUBOSC 242  // subosc
#define STR_RES__FUZZ 243  // fuzz
#define STR_RES_CRUSH 244  // crush
#define STR_RES_FREQUENCY 245  // frequency
#define STR_RES__RESO 246  // reso
#define STR_RES__ATTACK 247  // attack
#define STR_RES__DECAY 248  // decay
#define STR_RES__RELEASE 249  // release
#define STR_RES__LFO_4 250  // lfo 4
#define STR_RES__VCA 251  // vca
#define STR_RES_LP 252  // lp
#define STR_RES_BP 253  // bp
#define STR_RES_HP 254  // hp
#define STR_RES_NT 255  // nt
#define STR_RES_FREE 256  // free
#define STR_RES_ENVTLFO 257  // env~lfo
#define STR_RES_LFOTENV 258  // lfo~env
#define STR_RES_STEP_SEQ 259  // step seq
#define STR_RES_ARPEGGIO 260  // arpeggio
#define STR_RES__PATTERN 261  // pattern
#define STR_RES__OFF 262  // off
#define STR_RES_ADD 263  // add
#define STR_RES_PROD 264  // prod
#define STR_RES_ATTN 265  // attn
#define STR_RES_MAX 266  // max
#define STR_RES_MIN 267  // min
#define STR_RES__XOR 268  // xor
#define STR_RES_GE 269  // >=
#define STR_RES_LE 270  // <=
#define STR_RES_QTZ 271  // qtz
#define STR_RES_LAG 272  // lag
#define STR_RES_MONO 273  // mono
#define STR_RES_POLY 274  // poly
#define STR_RES_2X_UNISON 275  // 2x unison
#define STR_RES_CYCLIC 276  // cyclic
#define STR_RES_CHAIN 277  // chain
#define STR_RES_UP 278  // up
#define STR_RES_DOWN 279  // down
#define STR_RES_UP_DOWN 280  // up&down
#define STR_RES_PLAYED 281  // played
#define STR_RES__RANDOM 282  // random
#define STR_RES_CHORD 283  // chord
#define STR_RES_1_1 284  // 1/1
#define STR_RES_3_4 285  // 3/4
#define STR_RES_2_3 286  // 2/3
#define STR_RES_1_2 287  // 1/2
#define STR_RES_3_8 288  // 3/8
#define STR_RES_1_3 289  // 1/3
#define STR_RES_1_4 290  // 1/4
#define STR_RES_1_6 291  // 1/6
#define STR_RES_1_8 292  // 1/8
#define STR_RES_1_12 293  // 1/12
#define STR_RES_1_16 294  // 1/16
#define STR_RES_1_24 295  // 1/24
#define STR_RES_1_32 296  // 1/32
#define STR_RES_1_48 297  // 1/48
#define STR_RES_1_96 298  // 1/96
#define STR_RES_THRU 299  // thru
#define STR_RES_SEQUENCER 300  // sequencer
#define STR_RES_CONTROLLR 301  // controllr
#define STR_RES__CHAIN 302  // chain
#define STR_RES_FULL 303  // full
#define STR_RES_____ 304  // ....
#define STR_RES____S 305  // ...s
#define STR_RES___P_ 306  // ..p.
#define STR_RES___PS 307  // ..ps
#define STR_RES__N__ 308  // .n..
#define STR_RES__N_S 309  // .n.s
#define STR_RES__NP_ 310  // .np.
#define STR_RES__NPS 311  // .nps
#define STR_RES_C___ 312  // c...
#define STR_RES_C__S 313  // c..s
#define STR_RES_C_P_ 314  // c.p.
#define STR_RES_C_PS 315  // c.ps
#define STR_RES_CN__ 316  // cn..
#define STR_RES_CN_S 317  // cn.s
#define STR_RES_CNP_ 318  // cnp.
#define STR_RES_CNPS 319  // cnps
#define STR_RES_SWING 320  // swing
#define STR_RES_SHUFFLE 321  // shuffle
#define STR_RES_PUSH 322  // push
#define STR_RES__LAG 323  // lag
#define STR_RES_HUMAN 324  // human
#define STR_RES_MONKEY 325  // monkey
#define STR_RES_OSCILLATOR_1 326  // oscillator 1
#define STR_RES_OSCILLATOR_2 327  // oscillator 2
#define STR_RES_MIXER 328  // mixer
#define STR_RES_LFO 329  // lfo
#define STR_RES_FILTER_1 330  // filter 1
#define STR_RES_FILTER_2 331  // filter 2
#define STR_RES_ENVELOPE 332  // envelope
#define STR_RES_ARPEGGIATOR 333  // arpeggiator
#define STR_RES_MULTI 334  // multi
#define STR_RES_CLOCK 335  // clock
#define STR_RES_PERFORMANCE 336  // performance
#define STR_RES_SYSTEM 337  // system
#define STR_RES_PT_X_PATCH 338  // pt X patch
#define STR_RES_PT_X_SEQUENCE 339  // pt X sequence
#define STR_RES_PT_X_PROGRAM 340  // pt X program
#define STR_RES_RANDOMIZE 341  // randomize
#define STR_RES_INIT 342  // init
#define STR_RES_PATCH 343  // PATCH
#define STR_RES_SEQUENCE 344  // SEQUENCE
#define STR_RES_PROGRAM 345  // PROGRAM
#define STR_RES__MULTI 346  // MULTI
#define STR_RES____ 347  // ___
#define STR_RES_EQUAL 348  // equal
#define STR_RES_JUST 349  // just
#define STR_RES_PYTHAGOREAN 350  // pythagorean
#define STR_RES_1_4_EB 351  // 1/4 eb
#define STR_RES_1_4_E 352  // 1/4 e
#define STR_RES_1_4_EA 353  // 1/4 ea
#define STR_RES_BHAIRAV 354  // bhairav
#define STR_RES_GUNAKRI 355  // gunakri
#define STR_RES_MARWA 356  // marwa
#define STR_RES_SHREE 357  // shree
#define STR_RES_PURVI 358  // purvi
#define STR_RES_BILAWAL 359  // bilawal
#define STR_RES_YAMAN 360  // yaman
#define STR_RES_KAFI 361  // kafi
#define STR_RES_BHIMPALASREE 362  // bhimpalasree
#define STR_RES_DARBARI 363  // darbari
#define STR_RES_BAGESHREE 364  // bageshree
#define STR_RES_RAGESHREE 365  // rageshree
#define STR_RES_KHAMAJ 366  // khamaj
#define STR_RES_MIMAL 367  // mi'mal
#define STR_RES_PARAMESHWARI 368  // parameshwari
#define STR_RES_RANGESHWARI 369  // rangeshwari
#define STR_RES_GANGESHWARI 370  // gangeshwari
#define STR_RES_KAMESHWARI 371  // kameshwari
#define STR_RES_PA__KAFI 372  // pa. kafi
#define STR_RES_NATBHAIRAV 373  // natbhairav
#define STR_RES_M_KAUNS 374  // m.kauns
#define STR_RES_BAIRAGI 375  // bairagi
#define STR_RES_B_TODI 376  // b.todi
#define STR_RES_CHANDRADEEP 377  // chandradeep
#define STR_RES_KAUSHIK_TODI 378  // kaushik todi
#define STR_RES_JOGESHWARI 379  // jogeshwari
#define STR_RES_RASIA 380  // rasia
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
#define WAV_RES_LFO_WAVEFORMS_SIZE 2064
typedef avrlib::ResourcesManager<
    ResourceId,
    avrlib::ResourcesTables<
        string_table,
        lookup_table_table> > ResourcesManager; 

}  // namespace ambika

#endif  // CONTROLLER_RESOURCES_H_
