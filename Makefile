LATEX= latex
DVIPS= dvips -j0 -Ppdf -u ps2pk.map -G0 -t a4 -D 1200 -Z -mode ljfzzz
PS2PDF= ps2pdf -dEmbedAllFonts=true -dSubsetFonts=true

NAME= ruleset-dev
# FIGURES= images/*.eps

all: $(NAME).pdf

$(NAME).pdf: $(NAME).ps
	$(PS2PDF) $(NAME).ps $(NAME).pdf

$(NAME).ps: $(NAME).dvi
	$(DVIPS) -o $(NAME).ps $(NAME).dvi

$(NAME).dvi: $(NAME).tex
	$(LATEX) $(NAME).tex; $(LATEX) $(NAME).tex

clean:
	rm -f *.dvi *.ps *.pdf *.aux *.log *.lof *.lot *.toc
