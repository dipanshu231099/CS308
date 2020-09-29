
# Script to adapt models from GMM.

if [$# != 1]; then
	echo "Usage: adaptUbm.sh fileList"
	exit(-1)
fi
	

ID=00
UBM="/path/to/ubm"
# the location of the feature dumps
DUMPDIR=""
# the adapted models are generated here
OUTDIR="/path/to/outdir/"
LIST="inputList"
BIN="/path/to/bin"
UBMSIZE=1024

while read file
do
	echo "Adapting $file"
	# get the num frames for this file
	numFrames=`wc $DUMPDIR/$file.dat | awk'{print $1}'`
	# get dimension
	dim=`head -1 $DUMPDIR/$file.dat | wc | awk '{print $1}'`
	# call adaptation pgm
	cmd="$BIN $UBM $UBMSIZE $DUMPDIR/$file.dat $numFrames $dim $OUTDIR/$file.gmm"
	echo $cmd
	#`$cmd`
done < $LIST


