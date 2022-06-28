/* O voxel adicionado a seguir é a função que representará os pixels, ou seja, os cubos apresentados no desenho em 3D. 

Observação: Admitimos "true" para exibir o voxel na tela e "false" para não exibir o voxel na tela. 
*/  

struct Voxel
{
  float r,g,b;                    // Cores
  float a;                        // Transparência
  bool isOn;                      // "True or False" Aqui é onde teremos a ideia dos cubos, onde o usuário irá decidir se quer que o voxel seja exibido em tela ou não. (Atenção para a observação na linha 2!)
};