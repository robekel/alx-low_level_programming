" Disable compatibility with vi which can cause unexpected issues.
set nocompatible

" Enable type file detection. Vim will be able to try to detect the type of file is use.
filetype on

" Enable plugins and load plugin for the detected file type.
filetype plugin on

" Load an indent file for the detected file type.
filetype indent on

" Turn syntax highlighting on.
syntax on

colorscheme molokai

" Add numbers to the file.
set number

" Highlight cursor line underneath the cursor horizontally.
" set cursorline

" Highlight cursor line underneath the cursor vertically.
" set cursorcolumn

" Set shift width to 4 spaces.
set shiftwidth=8

" Set tab width to 4 columns.
set tabstop=8

" While searching though a file incrementally highlight matching characters as you type.
set incsearch

" Show partial command you type in the last line of the screen.
set showcmd

" Show the mode you are on the last line.
set showmode

" Show matching words during a search.
set showmatch

" Use highlighting when doing a search.
set hlsearch

"  Indent automatically a line depending on the previous one
set autoindent

" Intelligent indentation for C code
set smartindent
set cindent

" Length of a line
set textwidth=80

" don't load shady shit
set secure

" MOUSE ------------------------------------------------------------------

" behave like xterm
behave xterm
                  
" mouse support in normal and visual mode only
set mouse=nv

" autofocus
set mousefocus

" hide mouse pointer while typing
set mousehide


" PLUGINS ---------------------------------------------------------------- {{{

call plug#begin('~/.vim/plugged')


    Plug 'dense-analysis/ale'

    Plug 'preservim/nerdtree'


call plug#end()

" }}}


" MAPPINGS --------------------------------------------------------------- {{{

" Map the escape key to jj
inoremap jj <esc>



" }}}


" VIMSCRIPT -------------------------------------------------------------- {{{

" This will enable code folding.
" Use the marker method of folding.
" augroup filetype_vim
"     autocmd!
"     autocmd FileType vim setlocal foldmethod=marker
" augroup END

" More Vimscripts code goes here.

" }}}


" STATUS LINE ------------------------------------------------------------ {{{

" Clear status line when vimrc is reloaded.
set statusline=

" Status line left side.
set statusline+=\ %F\ %M\ %Y\ %R

" Use a divider to separate the left side from the right side.
set statusline+=%=

" Status line right side.
set statusline+=\ ascii:\ %b\ hex:\ 0x%B\ row:\ %l\ col:\ %c\ percent:\ %p%%

" Show the status on the second to last line.
set laststatus=2

" }}}

" POWERLINE -------------------------------------------------------------- <<<

" Always display the status bar
set laststatus=2

" Tell powerline to use Python 3
" set powerline_cmd="py3"

set  rtp+=/usr/local/lib/python2.7/dist-packages/powerline/bindings/vim/

set t_Co=256

python3 from powerline.vim import setup as powerline_setup
python3 powerline_setup()
python3 del powerline_setup

" >>>
